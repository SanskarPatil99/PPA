package com.marvellous.WithDependancyInjection;

import org.springframework.stereotype.Component;

@Component
public class HardDisk
{
    public String GetHardDisk()
    {
        return "HardDisk of 512GB";
    }
}