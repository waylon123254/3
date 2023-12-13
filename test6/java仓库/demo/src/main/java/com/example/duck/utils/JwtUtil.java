package com.example.duck.utils;

import io.jsonwebtoken.Claims;
import io.jsonwebtoken.Jwts;
import io.jsonwebtoken.SignatureAlgorithm;
import lombok.Data;
import org.springframework.boot.context.properties.ConfigurationProperties;
import org.springframework.stereotype.Component;

import java.util.Date;

/**
 * Jwt工具类
 */
@Data
@Component
@ConfigurationProperties(prefix = "duck.jwt")
public class JwtUtil {

    private long stale;// 过期时间
    private String secret; // 密钥
    private String header; // jwt名称

    // 生成jwt
    public String generateToken(String username){
        Date nowDate = new Date(); // 生成时间
        Date expireDate = new Date(nowDate.getTime() + 1000 * stale); // 7天时间

        return Jwts.builder()
                .setHeaderParam("typ","JWT")
                .setSubject(username)
                .setIssuedAt(nowDate)
                .setExpiration(expireDate) // 7天有效时间
                .signWith(SignatureAlgorithm.HS512, secret)
                .compact();
    }
    // 解析jwt
    public Claims getClaimsGetToken(String jwt){
        try{
            return Jwts.parser()
                    .setSigningKey(secret)
                    .parseClaimsJws(jwt)
                    .getBody();
        }catch (Exception e){
            return null;
        }
    }
    // jwt是否过期
    public boolean isTokenExpired(Claims claims){
        // 判断时间是否在当天之前
        return claims.getExpiration().before(new Date());
    }
}
