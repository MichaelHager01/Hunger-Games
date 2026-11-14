#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tribute {
    string name;                    // Attributes
    int defense;
    int speed;
    int strength;
    int camouflage;
    int district;
    string weapon;
    vector<string> inventory;

    public :
    Tribute(string na, int df, int sp, int st, int cf, int ds, string wp) : name(na), defense(df), speed(sp), strength(st), camouflage(cf), district(ds), weapon(wp) {}  // Constructor
     
    void add_df(int num);           // Editors
    void sub_df(int num);
    void add_sp(int num);
    void sub_sp(int num);
    void add_st(int num);
    void sub_st(int num);
    void add_cf(int num);
    void sub_cf(int num);
    void add_iv(string item);             // Add to inventory    
    bool sub_iv(string item);             // Remove from inventory

    string get_na();                // Getters
    int get_df();
    int get_sp();
    int get_st();
    int get_cf();
    int get_ds();
    string get_wp();
    void get_iv();

    ~Tribute();                     // Deconstructor

};

bool introduction();                // Functions
Tribute character_selection();
bool character_preview(Tribute user);
bool if_dead(int trait, int liveChance);
void entrance(Tribute user);
void encounter1(Tribute user);
void encounter2(Tribute user);
void encounter3(Tribute user);
void encounter4(Tribute user);
void encounter5(Tribute user);
void encounter6(Tribute user);
void win();
void dead(string cod);

