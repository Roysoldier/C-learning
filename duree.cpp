#include <cmath>
#include <iostream>
#include <string>

struct  Duree 
{
    int secondes;
    int minutes;
    int heures;
};

template <typename Structure>
std::tuple<int, int> convert_min(Structure & time) {
    while(time.secondes >= 60) {
        time.secondes -= 60;
        time.minutes += 1;
    }
   
    return std::tuple<int, int> {time.minutes,time.secondes}; 
}

template <typename Structure>
std::tuple<int, int,int> convert_hour(Structure & time) {
    while(time.secondes >= 60) {
        time.secondes -= 60;
        time.minutes += 1;
    }
    while(time.minutes >=60) {
        time.minutes -= 60;
        time.heures += 1;
    }
   
    return std::tuple<int, int, int> {time.heures,time.minutes,time.secondes}; 
}

Duree inverse(Duree & time) {
    if(time.heures > 0) {
        time.heures = time.heures - (time.heures*2);
    }
    else {
        time.heures = time.heures + (time.heures*2);
    }
    if(time.minutes > 0) {
        time.minutes = time.minutes - (time.minutes*2);
    }
    else {
        time.minutes = time.minutes + (time.minutes*2);
    }
    if(time.secondes > 0) {
        time.secondes = time.secondes - (time.secondes*2);
    }
    else {
        time.secondes = time.secondes + (time.secondes*2);
    }

    return time;

}

Duree  operator+(Duree const & time1,Duree const & time2) {
    Duree time {(time1.heures + time2.heures), (time1.minutes + time2.minutes), (time1.secondes + time2.secondes)};
    convert_hour(time);
    return {time.heures , time.minutes ,  time.secondes};
}

Duree  operator-(Duree const & time1,Duree const & time2) {
    Duree time {(time1.heures - time2.heures), (time1.minutes - time2.minutes), (time1.secondes - time2.secondes)};
    convert_hour(time);
    return {time.heures , time.minutes ,  time.secondes};
}

bool  operator==(Duree & time1 , Duree & time2) {
    if((time1.heures )== (time2.heures)) {
        if ((time1.minutes) == (time2.minutes)) {
            if ((time1.secondes) == (time2.secondes)) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

bool  operator!=(Duree & time1 , Duree & time2) {
    return !(time1==time2);
}

bool  operator>(Duree & time1 , Duree & time2) {
    convert_hour(time1);
    convert_hour(time2);
    if(time1.heures > time2.heures) {
        return true;
    }
    else if(time1.heures < time2.heures) {
        return false;
    }
    else if (time1.minutes > time2.minutes) {
        return true;
    }
    else if (time1.minutes < time2.minutes) {
        return false;
    }
    else if (time1.secondes > time2.secondes) {
        return true;
    }
    else {
        return false;
    }
    }
bool  operator>=(Duree & time1 , Duree & time2) {
    convert_hour(time1);
    convert_hour(time2);
    if(time1.heures >= time2.heures) {
        return true;
    }
    else if(time1.heures < time2.heures) {
        return false;
    }
    else if (time1.minutes >= time2.minutes) {
        return true;
    }
    else if (time1.minutes < time2.minutes) {
        return false;
    }
    else if (time1.secondes >= time2.secondes) {
        return true;
    }
    else {
        return false;
    }
    }

bool  operator<(Duree & time1 , Duree & time2) {
    return !(time1 > time2);
}
bool  operator<=(Duree & time1 , Duree & time2) {
    return !(time1 >= time2);
}


std::ostream & operator<<(std::ostream & flux, Duree const & time) {
    return flux << time.heures << "H " << time.minutes << "min " << time.secondes << "s";
}


int main () {

    Duree timer1 {56700};
    Duree timer2 {56700};

    auto [heures,minutes,secondes]=convert_hour(timer1);
    auto [heures2,minutes2,secondes2]=convert_hour(timer2);
    std::cout << timer2 - timer1 << std::endl;
    std::cout <<timer1 << " " << inverse(timer1);
    if(timer1 > timer2) {
        std::cout << "Egalité";
    }
    return 0;
}