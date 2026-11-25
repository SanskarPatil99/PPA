package com.marvellous.WithDependancyInjection;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class Laptop
{

    public HardDisk hobj;
    public Ram Robj;

    @Autowired
    public Laptop(HardDisk h,Ram R)
    {
        this.hobj=h;
        this.Robj=R;
    }

    @GetMapping("/PurchaseLaptop")
    public String GetLaptop()
    {
        String str1 = hobj.GetHardDisk();
        String str2 = Robj.GetRam();

        return "Laptop Contains " + str1 + " and " + str2;
    }
}