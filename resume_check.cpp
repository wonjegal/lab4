//
// Created by joonhyeok on 9/21/22.
//

#include "resume_check.h"

using namespace std;

void compare_resume(int argc, char * argv[], int &accept_id, float &accept_score){
    /* fill your code */
    ifstream Instream;
    accept_score = 0;

    for (int i = 1; i < argc - 1; i++){
        Instream.open(argv[i]);
        int id, number_of_sub, number_of_sem;
        float gra = 0;
        char name[100];
        Instream.getline(name, 100);
        Instream >> id >> number_of_sub >> number_of_sem;

        
        for(int p = 0; p < number_of_sub; p++){
            float tep, tep_gra = 0;
            for(int q = 0; q < number_of_sem; q++){
                Instream >> tep;
                tep_gra += tep;
            }
            tep_gra /= number_of_sem;
            if (tep_gra > gra) gra = tep_gra;
        }
        
        if (accept_score <= gra){
            if (accept_score < gra){
                accept_score = gra;
                accept_id = id; 
            }
            else{
                if(accept_id < id) accept_id = id;
            }
        }

        Instream.close();
    }
}


void print_result(char * output_file, int &accept_id, float &accept_score){
    /* fill your code */
    ofstream Opstream;
    Opstream.open(output_file);
    Opstream << "ID : " << accept_id << endl;
    Opstream << "Score : " << accept_score << endl;
    Opstream.close();
}
