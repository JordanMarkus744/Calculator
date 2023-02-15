#include <iostream> // Should work perfectly with only one set of parenthesis.
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() { //Making a calc using vectors so user can keep doing math
	top: 
	vector<float> HoldingVec; // Number vector
	vector<char> OPHoldingVec;// Operator vector
    string equation; // This holds the entire equation which is then disected into characters and passed to a switch statement
    char charinstring;// Iterates through my equation string
    string num;
    bool islongnum = false;
	string numbersandoperators = ""; //This is what shows the entire equation inputted when shown the final answer!

    bool equivilentBoolean = false;
    std::string equivilentstr = "";
    float equivilentNum;



	cout << "Type what you want to calculate using ( %, *, /, +, -, ^, !, (), s(squareroot),  ) put an '=' at the end\nTry 2+2=4" << endl; 
	cout << "Input full equation" << endl;
    cin >> equation;
    int equationlen = equation.length();

    for (int i = 0; i < equationlen; i++){
        charinstring = equation[i];
        switch (charinstring)
        {
        case '0':{
            if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case '1':{
            if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case '2':{
            if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case '3':{
            if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case '4':{
            if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case '5':{
            if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case '6':{
            if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case '7':{
           if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case '8':{
            if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case '9':{
            if (equivilentBoolean == true){
                equivilentstr += charinstring;
            }
            else{
                num+=charinstring;
                islongnum = true;
            }
            break;
        }

        case 's':{//SQUARE ROOT
            OPHoldingVec.push_back(charinstring);
            break;
        }

        case '*':{
            if(islongnum == true && equation[i-1] != '!'){
                float numseq = stof(num);
                islongnum = false;
                HoldingVec.push_back(numseq);
                num = "";
            }
            islongnum = false;
            OPHoldingVec.push_back(charinstring);
            break;
        }

        case '/':{
            if(islongnum == true && equation[i-1] != '!'){
                float numseq = stof(num);
                islongnum = false;
                HoldingVec.push_back(numseq);
                num = "";
            }
            islongnum = false;
            OPHoldingVec.push_back(charinstring);
            break;
        }

        case '+':{
            if(islongnum == true && equation[i-1] != '!'){
                float numseq = stof(num);
                islongnum = false;
                HoldingVec.push_back(numseq);
                num = "";
            }
            islongnum = false;
            OPHoldingVec.push_back(charinstring);
            break;
        }

        case '-':{
            if(islongnum == false && equation[i-1] != '!' && equation[i-1] != ')'){ //Meaning that it is a negative number not subtracting
                num += charinstring;
            }
            else if(islongnum == true && equation[i-1] == '!'){
                islongnum = false;
                OPHoldingVec.push_back(charinstring);
            }
            else if(islongnum == true){
                float numseq = stof(num);
                islongnum = false;
                HoldingVec.push_back(numseq);
                num = "";
                OPHoldingVec.push_back(charinstring);
            }
            else if(islongnum == false && equation[i-1] == ')'){
                OPHoldingVec.push_back(charinstring);
            }
            break;
        }

        case '%':{
            if(islongnum == true && equation[i-1] != '!'){
                float numseq = stof(num);
                islongnum = false;
                HoldingVec.push_back(numseq);
                num = "";
            }
            islongnum = false;
            OPHoldingVec.push_back(charinstring);
            break;
        }

        case '^':{
            if(islongnum == true && equation[i-1] != '!'){
                float numseq = stof(num);
                islongnum = false;
                HoldingVec.push_back(numseq);
                num = "";
            }
            islongnum = false;
            OPHoldingVec.push_back(charinstring);
            break;
        }

        case '!':{
            if(islongnum == true){
                float numseq = stof(num);
                HoldingVec.push_back(numseq);
                num = "";
            }
            OPHoldingVec.push_back(charinstring);
            break;
        }

        case '(':{
            if(islongnum == true){
                float numseq = stof(num);
                islongnum = false;
                HoldingVec.push_back(numseq);
                num = "";
            }
            OPHoldingVec.push_back(charinstring);
            break;
        }

        case ')':{
            if(islongnum == true && equation[i-1] != '!'){
                float numseq = stof(num);
                islongnum = false;
                HoldingVec.push_back(numseq);
                num = "";
            }
            islongnum = false;
            OPHoldingVec.push_back(charinstring);
            break;
        }

        case '.':{
            num += charinstring;
            islongnum = true;
            break;
        }

        case '=':{
            if (islongnum == true && equation[i-1] != '!'){
            float numseq = stof(num);
            islongnum = false;
            HoldingVec.push_back(numseq);
            num = "";
            }
            /*else if (islongnum == true && equation[i-1] == '!'){ Not sure why this is in here
                break;
            }*/
            if (equivilentBoolean == false && i < equationlen-1){
                equivilentBoolean = true;
            }
            break;
        }
        
        default:{
            cout << "One of the symbols you inputted can not be interpreted" << endl;
            goto top;
        }
        }
        char prev = charinstring;
    }

    if (equivilentBoolean){
    equivilentNum = stof(equivilentstr);
    std::cout << "Eq-> " << equivilentNum << "\n";
    }

    int opsize = OPHoldingVec.size(); // How many operands im holding in my operator vector
    int numsize = HoldingVec.size(); // How many numbers im holding in my number vector


    for (int i = 0; i < numsize; i++){ // Prints out my number vector
        cout << HoldingVec[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < opsize; i++){ // Prints out my operator vector
        cout << OPHoldingVec[i] << " ";
    }

    cout << "\n";

    //Parenthesis Work Station!
    for (int k = 0; k < 3; k++){
        int AmountOfParenthesis = 0;
        int openparenthesis = 0;
        int closedparenthesis = 0;

        for (int i = 0; i < opsize; i++){
            if (OPHoldingVec[i] == '(' && AmountOfParenthesis == 0){
                openparenthesis = i;
                AmountOfParenthesis++; //This is to find out how many closed parenthesis i'll have to search for
			}
            if (OPHoldingVec[i] == ')' && AmountOfParenthesis == 1){
                closedparenthesis = i;
                AmountOfParenthesis++;
            }
        }

        
            float HoldingNum;
            char HoldingOP;

            for (int m = openparenthesis; m < closedparenthesis; m++){

            if (OPHoldingVec[m] == '!'){ //Factorials

                float HoldingFactorialNum = 1;
                for (int j = HoldingVec[m-1]; j > 0; j--){
                    HoldingFactorialNum *= j;
                }

                HoldingVec[m-1] = HoldingFactorialNum;
                OPHoldingVec[m] = '@';

                for (int j = m+1; j < opsize; j++){
                    HoldingOP = OPHoldingVec[j-1];
                    OPHoldingVec[j-1] = OPHoldingVec[j];
                    OPHoldingVec[j] = HoldingOP;
                }
                closedparenthesis--;// -1 because when i move an operand to the far right, it is no longer in the parenthesis, so the parenthesis should get smaller
            
            }
            }

            for (int m = openparenthesis; m < closedparenthesis; m++){
			if (OPHoldingVec[m] == '^') { //Power
				HoldingVec[m-1] = pow(HoldingVec[m-1], HoldingVec[m]);
				HoldingVec[m] = -999.9;
				OPHoldingVec[m] = '@';
				for (int j = m; j < numsize-1; j++) {//Move -999.9 all the way to the end of the vector
					HoldingNum = HoldingVec[j];
					HoldingVec[j] = HoldingVec[j+1];
					HoldingVec[j+1] = HoldingNum;
                }
                for (int j = m; j < opsize-1; j++){
					HoldingOP = OPHoldingVec[j];
					OPHoldingVec[j] = OPHoldingVec[j+1];
					OPHoldingVec[j+1] = HoldingOP;
                }
                closedparenthesis--;// -1 because when i move an operand to the far right, it is no longer in the parenthesis, so the parenthesis should get smaller
			}
            }

            for (int m = openparenthesis; m < closedparenthesis; m++){
			if (OPHoldingVec[m] == '%') { // Modulo
				HoldingVec[m-1] = int(HoldingVec[m-1]) % int(HoldingVec[m]); // Had to cast the two numbers to an int for modulo to work
				HoldingVec[m] = -999.9;
				OPHoldingVec[m] = '@';

				for (int j = m; j < numsize - 1; j++) {//Move -999.9 all the way to the end of the vector
					HoldingNum = HoldingVec[j];
					HoldingVec[j] = HoldingVec[j+1];
					HoldingVec[j+1] = HoldingNum;
                }
                for (int j = m; j < opsize-1; j++){
					HoldingOP = OPHoldingVec[j]; //May need to lower these by 1
					OPHoldingVec[j] = OPHoldingVec[j+1];
					OPHoldingVec[j+1] = HoldingOP;
                }
                closedparenthesis--;// -1 because when i move an operand to the far right, it is no longer in the parenthesis, so the parenthesis should get smaller
			}
            }

            for (int m = openparenthesis; m < closedparenthesis; m++){ // Square Root
                if (OPHoldingVec[m] == 's'){
                    HoldingVec[m-1] = sqrt(HoldingVec[m-1]);
                    OPHoldingVec[m] = '@';

                    for (int j = m; j < opsize-1; j++){
					    HoldingOP = OPHoldingVec[j]; //May need to lower these by 1
					    OPHoldingVec[j] = OPHoldingVec[j+1];
					    OPHoldingVec[j+1] = HoldingOP;
                    }
                    closedparenthesis--;// -1 because when i move an operand to the far right, it is no longer in the parenthesis, so the parenthesis should get smaller
                }
            }


            for (int m = openparenthesis; m < closedparenthesis; m++){
			if (OPHoldingVec[m] == '/') { // Divide
				HoldingVec[m-1] = HoldingVec[m-1] / HoldingVec[m];
				HoldingVec[m] = -999.9;
				OPHoldingVec[m] = '@';

				for (int j = m; j < numsize - 1; j++) {//Move -999.9 all the way to the end of the vector
					HoldingNum = HoldingVec[j];
					HoldingVec[j] = HoldingVec[j+1];
					HoldingVec[j+1] = HoldingNum;
                }
                for (int j = m; j < opsize-1; j++){
					HoldingOP = OPHoldingVec[j]; //May need to lower these by 1
					OPHoldingVec[j] = OPHoldingVec[j+1];
					OPHoldingVec[j+1] = HoldingOP;
                }
                closedparenthesis--;// -1 because when i move an operand to the far right, it is no longer in the parenthesis, so the parenthesis should get smaller
			}
            }
            for (int m = openparenthesis; m < closedparenthesis; m++){
                if (OPHoldingVec[m] == '*') { // Multiply
                    HoldingVec[m-1] = HoldingVec[m-1] * HoldingVec[m];
                    HoldingVec[m] = -999.9;
                    OPHoldingVec[m] = '@';

                    for (int j = m; j < numsize - 1; j++) {//Move -999.9 all the way to the end of the vector
                        HoldingNum = HoldingVec[j];
                        HoldingVec[j] = HoldingVec[j+1];
                        HoldingVec[j+1] = HoldingNum;
                    }
                    for (int j = m; j < opsize-1; j++){
                        HoldingOP = OPHoldingVec[j]; //May need to lower these by 1
                        OPHoldingVec[j] = OPHoldingVec[j+1];
                        OPHoldingVec[j+1] = HoldingOP;
                    }
                    closedparenthesis--;// -1 because when i move an operand to the far right, it is no longer in the parenthesis, so the parenthesis should get smaller
                }
            }

            for (int m = openparenthesis; m < closedparenthesis; m++){ // This -999.9 isn't moving to the right
			if (OPHoldingVec[m] == '+') {
				HoldingVec[m-1] = HoldingVec[m-1] + HoldingVec[m];
				HoldingVec[m] = -999;
				OPHoldingVec[m] = '@';

				for (int j = m; j < numsize - 1 ; j++) {//Move -999.9 all the way to the end of the vector
					HoldingNum = HoldingVec[j];
					HoldingVec[j] = HoldingVec[j+1];
					HoldingVec[j+1] = HoldingNum;
                }
                for (int j = m; j < opsize-1; j++){
					HoldingOP = OPHoldingVec[j]; //May need to lower these by 1
					OPHoldingVec[j] = OPHoldingVec[j+1];
					OPHoldingVec[j+1] = HoldingOP;
                }
                closedparenthesis--;// -1 because when i move an operand to the far right, it is no longer in the parenthesis, so the parenthesis should get smaller
			}
            }

            for (int m = openparenthesis; m < closedparenthesis; m++){
			if (OPHoldingVec[m] == '-') { //if the current iteration in the operator vector == '-', do this
				HoldingVec[m-1] = HoldingVec[m-1] - HoldingVec[m];
				HoldingVec[m] = -999.9;
				OPHoldingVec[m] = '@';
				for (int j = m; j < numsize - 1; j++) {//Move -999.9 all the way to the end of the vector
					HoldingNum = HoldingVec[j];
					HoldingVec[j] = HoldingVec[j+1];
					HoldingVec[j+1] = HoldingNum;
                }
                for (int j = m; j < opsize-1; j++){
					HoldingOP = OPHoldingVec[j];
					OPHoldingVec[j] = OPHoldingVec[j+1];
					OPHoldingVec[j+1] = HoldingOP;
                }
				closedparenthesis--; // -1 because when i move an operand to the far right, it is no longer in the parenthesis, so the parenthesis should get smaller
			}
            }

            
         //for (int m = 0; m < 3; m++)
        
    }
    /* End of Parenthesis Workstation//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    */
   

    for (int i = 0; i < opsize; i++){
        char HoldingOP;
        if (OPHoldingVec[i] == ')'){
            for (int j = i; j < opsize - 1; j++){
                HoldingOP = OPHoldingVec[j];
                OPHoldingVec[j] = OPHoldingVec[j+1];
                OPHoldingVec[j+1] = HoldingOP;
            }
        }
    }

    for (int i = 0; i < opsize; i++){
        char HoldingOP;
        if (OPHoldingVec[i] == '('){
            for (int j = i; j < opsize - 1; j++){
                HoldingOP = OPHoldingVec[j];
                OPHoldingVec[j] = OPHoldingVec[j+1];
                OPHoldingVec[j+1] = HoldingOP;
            }
        }
    }


    for (int k = 0; k < 3; k++) {
		for (int i = 0; i < opsize; i++) {
			char HoldingOP;
			int FactiorialCounter = 0; // Doesn't do anything - too lazy to remove


			if (OPHoldingVec[i] == '!') {

				//iF FACTORIALCOUNTER == 0 THEN DO THIS
				if (FactiorialCounter == 0){
					float HoldingFactorialNum = 1;
					for (int j = HoldingVec[i]; j > 0; j--) { //Doing the factorial then after the for loop setting HoldingVec[i] set to the Factorial
					HoldingFactorialNum *= j;
				}
				HoldingVec[i] = HoldingFactorialNum;
				OPHoldingVec[i] = '@';
				for (int j = i + 1; j < opsize; j++) {//Move @ all the way to the end of the vector
					HoldingOP = OPHoldingVec[j - 1];
					OPHoldingVec[j - 1] = OPHoldingVec[j];
					OPHoldingVec[j] = HoldingOP;
				}
				}
		}
	}
	}



	for (int k = 0; k < 3; k++) {

		for (int i = 0; i < opsize; i++) {
			float HoldingNum;
			char HoldingOP;
			if (OPHoldingVec[i] == '^') {
				HoldingVec[i] = pow(HoldingVec[i], HoldingVec[i + 1]);
				HoldingVec[i + 1] = -999.9;
				OPHoldingVec[i] = '@';
				for (int j = i + 1; j < numsize; j++) {//Move -999.9 all the way to the end of the vector
					HoldingNum = HoldingVec[j];
					HoldingVec[j] = HoldingVec[j + 1];
					HoldingVec[j + 1] = HoldingNum;
                }
				for (int j = i + 1; j < opsize; j++){//Moves the new @ symbol to the right side of the op vector
                    HoldingOP = OPHoldingVec[j - 1];
					OPHoldingVec[j - 1] = OPHoldingVec[j];
					OPHoldingVec[j] = HoldingOP;
                }			
			}
		}
	}

        for (int k = 0; k < 3; k++){
            for (int i = 0; i < opsize; i++) {
                float HoldingNum;
                char HoldingOP;
                if (OPHoldingVec[i] == '%') { // MODULO
                    HoldingVec[i] = int(HoldingVec[i]) % int(HoldingVec[i + 1]);// Had to cast the two numbers in vec to int so they could be modulo'd
                    HoldingVec[i + 1] = -999.9;
                    OPHoldingVec[i] = '@';

                    for (int j = i + 1; j < numsize; j++) {//Move -999.9 all the way to the end of the vector
                        HoldingNum = HoldingVec[j];
                        HoldingVec[j] = HoldingVec[j + 1];
                        HoldingVec[j + 1] = HoldingNum;
                    }
                    for (int j = i + 1; j < opsize; j++){//Moves the new @ symbol to the right side of the op vector
                        HoldingOP = OPHoldingVec[j - 1];
                        OPHoldingVec[j - 1] = OPHoldingVec[j];
                        OPHoldingVec[j] = HoldingOP;
                    }				
                }
            }
        }

            for (int k = 0; k < 3; k++){
                for (int i = 0; i < opsize; i++) {
                    float HoldingNum;
                    char HoldingOP;
                if (OPHoldingVec[i] == 's'){ //SQUARE ROOT
                    HoldingVec[i] = sqrt(HoldingVec[i]);
                    OPHoldingVec[i] = '@';

                    for (int j = i + 1; j < opsize; j++){ // Moves the new @ symbol to the right side of the op vector
                        HoldingOP = OPHoldingVec[j-1];
                        OPHoldingVec[j-1] = OPHoldingVec[j];
                        OPHoldingVec[j] = HoldingOP;
                    }
                }
                }
            }

            for (int k = 0; k < 3; k++){
                for (int i = 0; i < opsize; i++) {
                    float HoldingNum;
                    char HoldingOP;
                if (OPHoldingVec[i] == '/') {
                    HoldingVec[i] = HoldingVec[i] / HoldingVec[i + 1];
                    HoldingVec[i + 1] = -999.9;
                    OPHoldingVec[i] = '@';

                    for (int j = i + 1; j < numsize; j++) {//Move -999.9 all the way to the end of the vector
                        HoldingNum = HoldingVec[j];
                        HoldingVec[j] = HoldingVec[j + 1];
                        HoldingVec[j + 1] = HoldingNum;
                    }
                    for (int j = i + 1; j < opsize; j++){
                        HoldingOP = OPHoldingVec[j - 1];
                        OPHoldingVec[j - 1] = OPHoldingVec[j];
                        OPHoldingVec[j] = HoldingOP;
                    }
                }
                }
            }

            for (int k = 0; k < 3; k++){
                for (int i = 0; i < opsize; i++) {
                    float HoldingNum;
                    char HoldingOP;
                    if (OPHoldingVec[i] == '*') {
                        HoldingVec[i] = HoldingVec[i] * HoldingVec[i + 1];
                        HoldingVec[i + 1] = -999.9;
                        OPHoldingVec[i] = '@';
                        for (int j = i + 1; j < numsize; j++) {//Move -999.9 all the way to the end of the vector
                            HoldingNum = HoldingVec[j];
                            HoldingVec[j] = HoldingVec[j + 1];
                            HoldingVec[j + 1] = HoldingNum;
                        }
                        for (int j = i + 1; j < opsize; j++){
                        HoldingOP = OPHoldingVec[j - 1];
                        OPHoldingVec[j - 1] = OPHoldingVec[j];
                        OPHoldingVec[j] = HoldingOP;
                        }                  
                    }
                }
            }

		

	for (int k = 0; k < 3; k++) {
		for (int i = 0; i < opsize; i++) {
			float HoldingNum;
			char HoldingOP;
			if (OPHoldingVec[i] == '+') {
				HoldingVec[i] = HoldingVec[i] + HoldingVec[i + 1];
				HoldingVec[i + 1] = -999.9;
				OPHoldingVec[i] = '@';

				for (int j = i + 1; j < numsize; j++) {//Move -999.9 all the way to the end of the vector
					HoldingNum = HoldingVec[j];
					HoldingVec[j] = HoldingVec[j + 1];
					HoldingVec[j + 1] = HoldingNum;
                }
                for (int j = i + 1; j < opsize; j++){
					HoldingOP = OPHoldingVec[j - 1];
					OPHoldingVec[j - 1] = OPHoldingVec[j];
					OPHoldingVec[j] = HoldingOP;
                }
				
			}
			if (OPHoldingVec[i] == '-') {
                if (HoldingVec[i+1] != -999.9 || HoldingVec[i != -999.9]){
                    HoldingVec[i] = HoldingVec[i] - HoldingVec[i + 1];
				    HoldingVec[i + 1] = -999.9;
				    OPHoldingVec[i] = '@';
                }
				

				for (int j = i + 1; j < numsize; j++) {//Move -999.9 all the way to the end of the vector
					HoldingNum = HoldingVec[j];
					HoldingVec[j] = HoldingVec[j + 1];
					HoldingVec[j + 1] = HoldingNum;
                }
                for (int j = i + 1; j < opsize; j++){
					HoldingOP = OPHoldingVec[j - 1];
					OPHoldingVec[j - 1] = OPHoldingVec[j];
					OPHoldingVec[j] = HoldingOP;
                }
			}
		}
	}

	cout << equation << "\nAnswer is: " << HoldingVec[0] << endl;

    
    if (equivilentBoolean == true){
        if (HoldingVec[0] == equivilentNum){
        std::cout << "\nTrue\n";
        }
        else{
            std::cout << "\nFalse\n";
        }
    }
    
	/*for (int i = 0; i < numsize; i++) {
		cout << HoldingVec[i] << ", ";
	}
	for (int i = 0; i < opsize; i++) {
		cout << OPHoldingVec[i] << ", ";
	}*/
}