//
//  main.cpp
//  createClasses
//
//  Created by Elsy Fernandes on 6/9/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//

// Log class

#include <iostream>
// log class
class Log{
public:
    const int LogWarning=1;
    const int LogError=0;
    const int LogTrace=2;
    
private:
    int m_LogLevel=LogTrace;
public:
    
    void SetLvelel(int level){
        m_LogLevel=level;
        
    }
    
    int GetLogLevel(){
        return m_LogLevel;
    }
    
    void Warn(const char* message){
        if (m_LogLevel>=LogWarning)
            std::cout<<"Warn"<<' '<<message<<'\n';
        
    }
    
    void Error(const char* message){
        if (m_LogLevel>=LogError)
           std::cout<<"Error"<<' '<<message<<'\n';
           
       }
    
    void Trace(const char* message){
        if (m_LogLevel>=LogTrace)
           std::cout<<"Trace"<<' '<<message<<'\n';
           
       }
};




int main() {

    Log log;
    log.SetLvelel(log.LogWarning);
    log.Warn("Warning");
    log.Error("Error");
    log.Trace("Trace");
    return 0;
}
