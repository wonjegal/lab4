//
// Created by joonhyeok on 9/18/23.
//
#include "resume_check.h"

int main(int argc, char * argv[]){
    int accept_id      = 0;
    float accept_score = 0.0f;

    compare_resume(argc, argv, accept_id, accept_score);

    print_result(argv[argc-1], accept_id, accept_score);

    return 0;
}