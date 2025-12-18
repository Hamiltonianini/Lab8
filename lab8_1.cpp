char findGrade(double grade){
    char letter;
    if(grade>90){
        letter = 'A';
    }else if(grade<=90 && grade>75){
        letter = 'B';
    }else if(grade<=75 && grade>60){
        letter = 'C';
    }else if(grade<=60 && grade>45){
        letter = 'D';
    }else{
        letter = 'F';
    }
    
    return letter;
}