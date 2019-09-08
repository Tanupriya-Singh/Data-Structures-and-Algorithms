void interleave(char* first, char* second, string output){

    /*
    It is not safe to initialize the last character of the array/string, because we simple might
    not have space.
    */
    if(first[0] == '\0' && second[0] == '\0'){
        cout<<output<<endl;
    }
    if(first[0] != '\0'){
        string tempOutput = output + first[0];
        interleave(first+1, second, tempOutput);

    }
    if(second[0] != '\0'){
        string tempOutput = output + second[0];
        interleave(first, second+1, tempOutput);
    }
}

void interleaving(char* first, char* second) {
    string output = "";
    interleave(first, second, output);
}
