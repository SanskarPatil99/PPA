package com.Marvellous.MarvellousPortal.Controller;

import com.Marvellous.MarvellousPortal.Entity.BatchEntry;
import org.springframework.web.bind.annotation.*;

import java.util.ArrayList;
import java.util.HashMap;

@RestController
@RequestMapping("/Batches")
public class BatchEntryController
{
    private HashMap<Long, BatchEntry> BatchEntries = new HashMap<>();

    @GetMapping
    public ArrayList<BatchEntry> getAll()
    {
        return new ArrayList<>(BatchEntries.values());
    }

    @PostMapping
    public String createEntry(@RequestBody BatchEntry myentry)
    {
        BatchEntries.put(myentry.getId(), myentry);
        return "Batch Information get Successfully Get Inserted";
    }
    //http://localhost:8080/Batches/id/3
    @DeleteMapping("/id{myid}")
    public void deleteById(@PathVariable Long myid)
    {
        BatchEntries.remove(myid);

    }
    @PutMapping("/id{myid}")
    public void updateEntry(@PathVariable Long myid,@RequestBody BatchEntry myentry)
    {
        myentry.setId(myid);
        BatchEntries.put(myid,myentry);

    }
}