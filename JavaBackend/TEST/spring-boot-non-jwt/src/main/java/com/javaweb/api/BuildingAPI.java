package com.javaweb.api;

import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.javaweb.Beans.BuildingDTO;
import com.javaweb.Beans.ErrorResponseDTO;

import customexception.FieldRequiredException;

import java.net.ConnectException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

@RestController
@RequestMapping("/api/building")
public class BuildingAPI {
	
	static final String DB_URL = "jdbc:mysql://localhost:3306/estatebasic";
	static final String USER = "root";
	static final String PASS = "123456";
	
    @GetMapping("/")
    public List<BuildingDTO> getBuilding() {
    	String sql = "SELECT * FROM building";
    	List<BuildingDTO> result= new ArrayList<>();
        try(Connection conn = DriverManager.getConnection(DB_URL, USER, PASS);       		
        		Statement stmt = conn.createStatement();
        		ResultSet rs= stmt.executeQuery(sql);
        		) {
        	while(rs.next()) {
        		BuildingDTO building= new BuildingDTO();
        		building.setName(rs.getString("name"));
        		building.setStreet(rs.getString("street"));
        		building.setWard(rs.getString("ward"));
        		building.setNumberOfBasement(rs.getInt("numberofbasement"));
        		result.add(building);
        	}
			
		} catch (SQLException e) {
			e.printStackTrace();
			System.out.println("Connected database failed...");
		}
    	
        return result;
    }
    
    public void valiDate(BuildingDTO buildingDTO) throws FieldRequiredException {
    	if(buildingDTO.getName() == null || buildingDTO.getName().equals("") || buildingDTO.getNumberOfBasement() == null) {
    		throw new FieldRequiredException(" name or numberofbasement is null ");
    	}
    }

//    @PostMapping("/")
//    public BuildingDTO createBuilding(@RequestBody BuildingDTO building) {
//        return building;
//    }

    @DeleteMapping("/{id}")
    public String deleteBuilding(@PathVariable Integer id) {
        return "Đã xóa tòa nhà có id: " + id;
    }
}