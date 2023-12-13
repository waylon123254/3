package com.example.duck.config;

import com.google.code.kaptcha.impl.DefaultKaptcha;
import com.google.code.kaptcha.util.Config;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

import java.util.Properties;

/**
 * 图片验证码
 */
@Configuration
public class KaptchaConfig {
    @Bean
    DefaultKaptcha producer(){
        Properties properties = new Properties();
        properties.put("kaptcha.border","no");
        properties.put("kaptcha.textproducer.font.color","black");
        properties.put("kaptcha.textproducer.char.space","4");
        properties.put("kaptcha.image.height","50");
        properties.put("kaptcha.image.width","180");
        properties.put("kaptcha.textproducer.font-size","18");

        Config config = new Config(properties);
        DefaultKaptcha defaultKaptcha = new DefaultKaptcha();
        defaultKaptcha.setConfig(config);
        return defaultKaptcha;
    }
}
