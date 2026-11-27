package com.marvellous.SpringRoute;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class LB
{
    @GetMapping("LB")
    public String DisplayLB()

    {
        return"LB IS THE LOGIC BUILDING BATCH";
    }

}
