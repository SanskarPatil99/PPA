package com.marvellous.SpringRoute;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class PPA1 {

    @GetMapping("PPABATCH")
    public String displayPPA() {
        return "PPA IS THE FOUNDATION BATCH";
    }
}