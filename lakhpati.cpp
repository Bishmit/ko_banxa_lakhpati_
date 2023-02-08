// ko banxa lakhpati yesso in nepali style 
#include<iostream>
#include<conio.h>
using namespace std; 
int main(){
	cout<<"==========KO BANXA LAKHPATI YESSO=============="<<endl;
	string questions[7] = {
		"Who is the first king of united nepal?", 
		"How much of the Heritage of Nepal is to be celebrated in the World Heritage Site?",
		"Which is the first newspaper in the Nepal?",
		"Who was the Zero inventor?",
		"Which is the first scientist in Nepal?",
		"Which district has begun with producing tea?",
		"Who is father of modern physics?"
	};
	
	string options[7][4] = {
	{"Mansigh","bhaktaram","birbal","pirthivi_naryan_shah"},
	{"10","20","5","None of these"},
	{"kathmandu_post","Himalayan_post","Gorkha_patra","Annapurna_post"},
	{"Heraclitus","phythagoras","Anaximander","AryaBhatt"},
	{"Albert_Eintsten", "Gahendra_samsher", "Bishmit_Regmi", "Kushal_pathak"},
	{"Darjeeling", "jhapa", "humla", "ilam"},
	{"Richard_feynman", "Albert_Einsten", "Sir_issac_newton", "Galelio_galeli"}
};

  	string correctOptions[7] = {
		"pirthivi_naryan_shah","10","Gorkha_patra","AryaBhatt","Gahendra_samsher","ilam","Galelio_galeli"
	};
	int useroptions[4] = {0, 0, 0, 0};
	int totalQ = 7; 
	int option;
	int sum =1000; 
	 for( int i=0; i<totalQ; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		cout<<"Select Option (1-4) or 0 to quit \nChoose option and press enter: ";
	    cin>>useroptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
		
		if( useroptions[i] == 0 ){
			cout<< "You quit the game."<<endl;
					
		}else {
			cout<< "You Selected : "<<options[i][useroptions[i]-1]<<endl;		
		}
		cout<<correctOptions[i]<<" was the right answer.."<<endl<<endl;
		
		if(correctOptions[i] == options[i][useroptions[i]-1]){
		sum = sum *2; 
		cout<<"Congratulation you have won "<<sum<<"Rupees"<<endl;
		cout<<endl;
		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	else {
	cout<<"Journey ends right here "<<endl;
	exit(0);
}
}
int correct = 0;
	for( int i=0; i<totalQ; i++ ){
		if( useroptions[i] != 0 ){
			if( correctOptions[i] == options[i][useroptions[i]-1] ){
				correct++;	
			}
		}
	}
	cout<<"------------Status---------------"<<endl;
	cout<< "Total Questions : "<< totalQ <<endl;	
	cout<< "Correct : "<< correct <<endl;
	cout<<"----Total Amount----"<<endl;
	cout<<"----Rs."<<sum<<"-------"<<endl;
	getch();
	return 0;
}

