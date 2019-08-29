//
//  main.cpp
//  YahrmAI
//
//  Created by  Yeahreum Team on 12/08/2017.
//  Copyright © 2017 The Yeahreum Core Developers. All rights reserved.
//  Copyright © 2019 Erickson Hyppolite . All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>


int main(int argc, const char * argv[]) {
    
    
    
     char url[1000] = "https://www.yeahreum.com";
    
    
    std::fstream fs;
    fs.open(url);
    fs.close();
    
    
    
    
    std::cout << "Yeahreum AI Cmd!\n";
   return 0;
}
