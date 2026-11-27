package com.Marvellous.MarvellousPortal.Controller;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class HealthCheck
{
    @GetMapping("Check")
    public String Check()
    {
        return "Marvellous Portal is Live";
    }
    @GetMapping("/")
    public String Homepage()
    {
        return "Welcome To Marvellous Portal";
    }
}
