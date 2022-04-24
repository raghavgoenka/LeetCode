class UndergroundSystem {
public:
    map<int,pair<string,double>>in;
    map<string,pair<double,double>>time;
    UndergroundSystem() {
        // in.clear();
        // time.clear();
    }
    
    void checkIn(int id, string stationName, int t) {
        in[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        double a=t-in[id].second;    
        string s=in[id].first+"->"+stationName;
        a+=time[s].first;double t1=time[s].second+1;
        time[s]={a,t1};
            
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        string s=startStation+"->"+endStation;
        return time[s].first/time[s].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */