//HFACS-ME ANALYSIS PROGRAM BY MOSES MICHAEL
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

int main ()
{
	using namespace std;

    float org = 0, sup = 0, med = 0, crw = 0, red= 0, env = 0, eqp = 0, wks = 0, err = 0, vio = 0, qn = 0, ttl = 34;
	string ans;
    string seps = "---------------------------------------------------";
    string sepm = "---------------------------------------------------------";
    string sepl = "----------------------------------------------------------------------------------------------------------------------------";
    string exp = "\nExamples:";
    string com = "                                                                                                    ANALYSIS COMPLETED = ";
    string per = ",    PED = ";
    string res = "\nHFACS-ME ANALYSIS RESULTS:     ERROR FREE = ";
    string fst = "\nFIRST ORDER";
    string sec = "\nSECOND ORDER";	
    string thr = "THIRD ORDER - Percentage Error Distribution= ";	
    string nex = "\n\nNEXT CHECK QUESTION: ";
    string unr = "Unrecognized answer, please enter Y for YES and N for NO";        
    string title = ": NANJING UNIVERSITY OF AERONAUTICS AND ASTRONAUTICS - HFACS-ME ERRORS CLASSIFICATION AND ANALYSIS - MOSES MICHAEL :";
	system("cls"); 

    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;

	

	cout << "\nPlease enter Y for YES and N for NO:" <<endl;
    cout <<seps<<endl;

/*MANAGEMENT CONDITIONS*/

//Organizational errors check

//Question 1
	cout << "\nCHECK QUESTION: "<<endl;
	cout <<seps<<endl;
	cout << "Was there any Inadequate Processes?" <<endl;
	cout <<exp<<endl;
	cout << "1. Task Complex/Confusing Procedures" <<endl;
	cout << "2. Procedures Incomplete" <<endl;
	cout << "3. Non-Existing Procedures" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		org = org + 1;
		system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-org)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<org/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
        cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<org<<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
		system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-org)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<org/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;    	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;	
 		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<org<<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
	system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Inadequate Processes?" <<endl;
	cout <<exp<<endl;
	cout << "1. Task Complex/Confusing Procedures" <<endl;
	cout << "2. Procedures Incomplete" <<endl;
	cout << "3. Non-Existing Procedures" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");


//Question 2
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Inadequate Resources?" <<endl;	
	cout <<exp<<endl;
	cout << "1. Parts Unavailable" <<endl;
	cout << "2. Manning Shortfall" <<endl;
	cout << "3. Funding Constraint" <<endl;	
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		org = org + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-org)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<org/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND" <<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<org<<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-org)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<org/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
   		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<org<<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls");     
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;  
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Inadequate Resources?" <<endl;
	cout <<exp<<endl;
	cout << "1. Parts Unavailable" <<endl;
	cout << "2. Manning Shortfall" <<endl;
	cout << "3. Funding Constraint" <<endl;			
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 3	
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Inadequate Documentation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Not Understandable" <<endl;
	cout << "2. Information Unavailable" <<endl;
	cout << "3. Conflicting Information" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		org = org + 1;
		system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-org)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<org/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
   		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<org<<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-org)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<org/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
   		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<org<<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Inadequate Documentation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Not Understandable" <<endl;
	cout << "2. Information Unavailable" <<endl;
	cout << "3. Conflicting Information" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");	
	

//Question 4	
    cout <<nex<<endl;
    cout <<seps<<endl;  
	cout << "Was there any Inadequate Design?" <<endl;
	cout <<exp<<endl;
	cout << "1. Poor Layout/Configuration" <<endl;
	cout << "2. Poor/No Accessibility" <<endl;
	cout << "3. Easy to Incorrectly Install" <<endl;
	qn = qn + 1;		
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		org = org + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-org)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<org/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<org<<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-org+sup+med+crw+red+env+eqp+wks+err+vio)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<org/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<org<<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Inadequate Design?" <<endl;
	cout <<exp<<endl;
	cout << "1. Poor Layout/Configuration" <<endl;
	cout << "2. Poor/No Accessibility" <<endl;
	cout << "3. Easy to Incorrectly Install" <<endl;			
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");	
	
	
//Supervisory errors check

//Question 5
    cout <<nex<<endl;
    cout <<seps<<endl; ;
	cout << "Was there any Uncorrected problems?" <<endl;
	cout <<exp<<endl;
	cout << "1. Manual Not Updated" <<endl;
	cout << "2. Parts/Tool Incorrectly Labeled" <<endl;
	cout << "3. Known Hazards Not Controlled" <<endl;	
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		sup = sup + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND" <<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND" <<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls");     
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Uncorrected problems?" <<endl;
	cout <<exp<<endl;
	cout << "1. Manual Not Updated" <<endl;
	cout << "2. Parts/Tool Incorrectly Labeled" <<endl;
	cout << "3. Known Hazards Not Controlled" <<endl;			
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 6
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Inappropriate Operations?" <<endl;
	cout <<exp<<endl;
	cout << "1. Information Not Used" <<endl;
	cout << "2. Unrealistic Expectations" <<endl;
	cout << "3. Improper Task Prioritization" <<endl;	
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		sup = sup + 1;
        system("cls");       
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND" <<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND" <<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
	    }
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Inappropriate Operations?" <<endl;
	cout <<exp<<endl;
	cout << "1. Information Not Used" <<endl;
	cout << "2. Unrealistic Expectations" <<endl;
	cout << "3. Improper Task Prioritization" <<endl;			
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 7
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Supervisory Misconduct?" <<endl;
	cout <<exp<<endl;
	cout << "1. Policy/Procedures Not Followed" <<endl;
	cout << "2. Policy/Procedures Not Enforced" <<endl;
	cout << "3. Assigned Unqualified Maintainer" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		sup = sup + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "SUB-TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
	    }
		else
		{
        system("cls");    
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;  
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Supervisory Misconduct?" <<endl;
	cout <<exp<<endl;
	cout << "1. Policy/Procedures Not Followed" <<endl;
	cout << "2. Policy/Procedures Not Enforced" <<endl;
	cout << "3. Assigned Unqualified Maintainer" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");	
	

//Question 8
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Inadequate Supervision?" <<endl;
	cout <<exp<<endl;
	cout << "1. Task Planning/Organization" <<endl;
	cout << "2. Task Delegation/Assignment" <<endl;
	cout << "3. Amount of Supervision" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		sup = sup + 1;
    system("cls");   
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup))/ttl*100<<"%"<<endl;
    cout <<seps<<endl; 
	cout <<thr<<fixed<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	       
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Inadequate Supervision?" <<endl;
	cout <<exp<<endl;
	cout << "1. Task Planning/Organization" <<endl;
	cout << "2. Task Delegation/Assignment" <<endl;
	cout << "3. Amount of Supervision" <<endl;
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	
/*MAINTAINER CONDITIONS*/
	
//Medical errors check

//Question 9
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Did Maintainer have any Unsafe Limitation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Body Size/Strength" <<endl;
	cout << "2. Eye Sight/Hearing" <<endl;
	cout << "3. Reach/View" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		med = med + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR FOUND"<<per<<setprecision(2)<<med/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<med<<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR FOUND"<<per<<setprecision(2)<<med/ttl*100<<"%"  <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<med<<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
		cout << "Did Maintainer have any Unsafe Limitation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Body Size/Strength" <<endl;
	cout << "2. Eye Sight/Hearing" <<endl;
	cout << "3. Reach/View" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 10
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Did Maintainer have any Adverse Physical State?" <<endl;
	cout <<exp<<endl;
	cout << "1. Health/Illness" <<endl;
	cout << "2. Fatigue" <<endl;
	cout << "3. Circadian Rhythm" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		med = med + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<med<<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
	    cout <<fst<<endl;      	
    cout <<seps<<endl;	
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<med<<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Did Maintainer have any Adverse Physical State?" <<endl;
	cout <<exp<<endl;
	cout << "1. Health/Illness" <<endl;
	cout << "2. Fatigue" <<endl;
	cout << "3. Circadian Rhythm" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 11
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Did Maintainer have any Adverse Mental State?" <<endl;
	cout <<exp<<endl;
	cout << "1. Peer Pressure" <<endl;
	cout << "2. Complacency" <<endl;
	cout << "3. Life Stress" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		med = med + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<med<<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND"<<per<<setprecision(2)<<med/ttl*100<<"%"  <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<med<<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Did Maintainer have any Adverse Mental State" <<endl;
	cout <<exp<<endl;
	cout << "1. Peer Pressure" <<endl;
	cout << "2. Complacency" <<endl;
	cout << "3. Life Stress" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");	
	

//Crew coordination errors check

//Question 12
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Crew's Inadequate Adaptability/Flexibility?" <<endl;
	cout <<exp<<endl;
	cout << "1. Non-adherence to Change" <<endl;
	cout << "2. Different from Similar Tasks" <<endl;
	cout << "3. Disregard of Constraint" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		crw = crw + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND" <<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw)<<per<<setprecision(2)<<(med+crw)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR FOUND"<<per<<setprecision(2)<<crw/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw)<<per<<setprecision(2)<<(med+crw)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Crew's Inadequate Adaptability/Flexibility?" <<endl;
	cout <<exp<<endl;
	cout << "1. Non-adherence to Change" <<endl;
	cout << "2. Different from Similar Tasks" <<endl;
	cout << "3. Disregard of Constraint" <<endl;
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 13
    cout <<nex<<endl;
    cout <<seps<<endl;
	cout << "Was there any Crew's Inadequate Assertiveness?" <<endl;
	cout <<exp<<endl;
	cout << "1. Peer Pressure" <<endl;
	cout << "2. Rank Gradient" <<endl;
	cout << "3. New to Group" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		crw = crw + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND"<<per<<setprecision(2)<<med/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw)<<per<<setprecision(2)<<(med+crw)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw)<<per<<setprecision(2)<<(med+crw)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Crew's Inadequate Assertiveness?" <<endl;
	cout <<exp<<endl;
	cout << "1. Peer Pressure" <<endl;
	cout << "2. Rank Gradient" <<endl;
	cout << "3. New to Group" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 14
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Crew's Inadequate Communication?" <<endl;
	cout <<exp<<endl;
	cout << "1. Non Standard Hand Signals" <<endl;
	cout << "2. Inappropriate Log Entry" <<endl;
	cout << "3. Inadequate Shift Passdown" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		crw = crw + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND"<<per<<setprecision(2)<<med/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw)<<per<<setprecision(2)<<(med+crw)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND"<<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND"<<per<<setprecision(2)<<med/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND"<<per<<setprecision(2)<<crw/ttl*100<<"%"  <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw)<<per<<setprecision(2)<<(med+crw)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Crew's Inadequate Communication?" <<endl;
	cout <<exp<<endl;
	cout << "1. Non Standard Hand Signals" <<endl;
	cout << "2. Inappropriate Log Entry" <<endl;
	cout << "3. Inadequate Shift Passdown" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");	
	
	
//Readiness errors check

//Question 15
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Personnel Readiness Infringement?" <<endl;
	cout <<exp<<endl;
	cout << "1. Self-Medication" <<endl;
	cout << "2. Alcohol Use" <<endl;
	cout << "3. Crew Rest" <<endl;	
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		red = red + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw)<<per<<setprecision(2)<<(med+crw)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw)<<per<<setprecision(2)<<(med+crw)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Personnel Readiness Infringement?" <<endl;
	cout <<exp<<endl;
	cout << "1. Self-Medication" <<endl;
	cout << "2. Alcohol Use" <<endl;
	cout << "3. Crew Rest" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 16
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Inadequate Certification/Qualification?" <<endl;
	cout <<exp<<endl;
	cout << "1. Not Certified for Task" <<endl;
	cout << "2. Incomplete PQS" <<endl;
	cout << "3. Not Licensed to Operate" <<endl;
	qn = qn + 1;
    do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		red = red + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
    	}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Inadequate Certification/Qualification?" <<endl;
	cout <<exp<<endl;
	cout << "1. Not Certified for Task" <<endl;
	cout << "2. Incomplete PQS" <<endl;
	cout << "3. Not Licensed to Operate" <<endl;
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 17
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Inadequate Training/Preparation?" <<endl;
	cout <<exp<<endl;
	cout << "1. New/Changed Task" <<endl;
	cout << "2. Inadequate Skills" <<endl;
	cout << "3. Inadequate Knowledge" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		red = red + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Inadequate Training/Preparation?" <<endl;
	cout <<exp<<endl;
	cout << "1. New/Changed Task" <<endl;
	cout << "2. Inadequate Skills" <<endl;
	cout << "3. Inadequate Knowledge" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

/*WORKING CONDITIONS*/	

//Enviromental errors check

//Question 18
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Unsafe Environmental Hazards?" <<endl;
	cout <<exp<<endl;
	cout << "1. High Noise Levels" <<endl;
	cout << "2. Housekeeping/Cleanliness" <<endl;
	cout << "3. Hazardous/Toxic Substances" <<endl;	
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		env = env + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
	cout <<fst<<endl;      	
    cout <<seps<<endl;		
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<env<<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;		
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<env<<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Unsafe Environmental Hazards?" <<endl;
	cout <<exp<<endl;
	cout << "1. High Noise Levels" <<endl;
	cout << "2. Housekeeping/Cleanliness" <<endl;
	cout << "3. Hazardous/Toxic Substances" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 19
    cout <<nex<<endl;
    cout <<seps<<endl; 	
	cout << "Was there any Unsafe Weather/Exposure?" <<endl;
	cout <<exp<<endl;
	cout << "1. Temperature" <<endl;
	cout << "2. Precipitation" <<endl;
	cout << "3. Wind" <<endl;	
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		env = env + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<env<<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;	
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;	
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<env<<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Unsafe Weather/Exposure?" <<endl;
	cout <<exp<<endl;
	cout << "1. Temperature" <<endl;
	cout << "2. Precipitation" <<endl;
	cout << "3. Wind" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 20
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Inadequate Lighting/Light?" <<endl;
	cout <<exp<<endl;
	cout << "1. Inadequate Natural Light" <<endl;
	cout << "2. Inadequate Artificial Lighting" <<endl;
	cout << "3. Dusk/Nighttime" <<endl;	
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		env = env + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<env<<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;	
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;	
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<env<<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Inadequate Lighting/Light?" <<endl;
	cout <<exp<<endl;
	cout << "1. Inadequate Natural Light" <<endl;
	cout << "2. Inadequate Artificial Lighting" <<endl;
	cout << "3. Dusk/Nighttime" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	
	
//Equipments errors check

//Question 21
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Dated/Uncertified equipments used?" <<endl;
	cout <<exp<<endl;
	cout << "1. Unreliable/Faulty" <<endl;
	cout << "2. Inoperable/Uncontrollable" <<endl;
	cout << "3. Miscalibrated" <<endl;
	qn = qn + 1;	
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		eqp = eqp + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp)<<per<<setprecision(2)<<(env+eqp)/ttl*100<<"%"<<endl;			
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;	
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp)<<per<<setprecision(2)<<(env+eqp)/ttl*100<<"%"<<endl;		
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Dated/Uncertified equipments used?" <<endl;
	cout <<exp<<endl;
	cout << "1. Unreliable/Faulty" <<endl;
	cout << "2. Inoperable/Uncontrollable" <<endl;
	cout << "3. Miscalibrated" <<endl;
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 22
    cout <<nex<<endl;
    cout <<seps<<endl; 
    cout << "Was there any Unavailable/Inappropriate equipments?" <<endl;
	cout <<exp<<endl;
	cout << "1. Unavailable for Use" <<endl;
	cout << "2. Inappropriate for Task" <<endl;
	cout << "3. Power Sources Inadequate" <<endl;
	qn = qn + 1;	
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		eqp = eqp + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp)<<per<<setprecision(2)<<(env+eqp)/ttl*100<<"%"<<endl;			
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp)<<per<<setprecision(2)<<(env+eqp)/ttl*100<<"%"<<endl;		
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
    cout << "Was there any Unavailable/Inappropriate equipments?" <<endl;
	cout <<exp<<endl;
	cout << "1. Unavailable for Use" <<endl;
	cout << "2. Inappropriate for Task" <<endl;
	cout << "3. Power Sources Inadequate" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

//Question 23
    cout <<nex<<endl;
    cout <<seps<<endl; 
    cout << "Was there any Damaged/Unserviced equipments used?" <<endl;
	cout <<exp<<endl;
	cout << "1. Unsafe/Hazardous" <<endl;
	cout << "2. Unreliable/Faulty" <<endl;
	cout << "3. Inoperable/Uncontrollable" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		eqp = eqp + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp)<<per<<setprecision(2)<<(env+eqp)/ttl*100<<"%"<<endl;			
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp)<<per<<setprecision(2)<<(env+eqp)/ttl*100<<"%"<<endl;			
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
    cout << "Was there any Damaged/Unserviced equipments used?" <<endl;
	cout <<exp<<endl;
	cout << "1. Unsafe/Hazardous" <<endl;
	cout << "2. Unreliable/Faulty" <<endl;
	cout << "3. Inoperable/Uncontrollable" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");


//Workspace errors check

//Question 24
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was the Work-space Inaccessible?" <<endl;
	cout <<exp<<endl;
	cout << "1. Totally Inaccessible" <<endl;
	cout << "2. Not Directly Accessible" <<endl;
	cout << "3. Partially Accessible" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		wks = wks + 1;
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;			
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls");
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;						
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;			
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was the Work-space Inaccessible?" <<endl;
	cout <<exp<<endl;
	cout << "1. Totally Inaccessible" <<endl;
	cout << "2. Not Directly Accessible" <<endl;
	cout << "3. Partially Accessible" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");	
	

//Question 25
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was the Work-space Obstructed?" <<endl;
	cout <<exp<<endl;
	cout << "1. Not Visible" <<endl;
	cout << "2. Not Directly Visible" <<endl;
	cout << "3. Partially Visible" <<endl;
	qn = qn + 1;	
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		wks = wks + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;							
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "SUB-TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;		
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl; 
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was the Work-space Obstructed?" <<endl;
	cout <<exp<<endl;
	cout << "1. Not Visible" <<endl;
	cout << "2. Not Directly Visible" <<endl;
	cout << "3. Partially Visible" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");	
	

//Question 26
    cout <<nex<<endl;
    cout <<seps<<endl; 	
	cout << "Was the Work-space Confining?" <<endl;
	cout <<exp<<endl;
	cout << "1. Constrained Tool Use" <<endl;
	cout << "2. Constrained Equipment Use" <<endl;
	cout << "3. Constrained Position" <<endl;
	qn = qn + 1;	
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		wks = wks + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;								
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;		
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;									
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;		
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was the Work-space Confining?" <<endl;
	cout <<exp<<endl;
	cout << "1. Constrained Tool Use" <<endl;
	cout << "2. Constrained Equipment Use" <<endl;
	cout << "3. Constrained Position" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");
	

/*MAINTAINER ACTS*/

//Maintainer's errors check

//Question 27
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Maintainer's Knowledge/Rule Based issues?" <<endl;
	cout <<exp<<endl;
	cout << "1. Inadequate Task Knowledge" <<endl;
	cout << "2. Inadequate Process Knowledge" <<endl;
	cout << "3. Inadequate Aircraft Knowledge" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		err = err + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;		
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;		      		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<err<<per<<setprecision(2)<<(err)/ttl*100<<"%"<<endl;		     		
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;		      		      
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<err<<per<<setprecision(2)<<(err)/ttl*100<<"%"<<endl;		     		      						      	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Maintainer's Knowledge/Rule Based issues?" <<endl;
	cout <<exp<<endl;
	cout << "1. Inadequate Task Knowledge" <<endl;
	cout << "2. Inadequate Process Knowledge" <<endl;
	cout << "3. Inadequate Aircraft Knowledge" <<endl;
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");	


//Question 28
    cout <<nex<<endl;
    cout <<seps<<endl; 
    cout << "Was there any Maintainer's Judgment/Decision-Making issues?" <<endl;
	cout <<exp<<endl;
	cout << "1. Exceeded Ability" <<endl;
	cout << "2. Misjudged/Misperceived" <<endl;
	cout << "3. Misdiagnosed Situation" <<endl;	
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		err = err + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;	      		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<err<<per<<setprecision(2)<<(err)/ttl*100<<"%"<<endl;		     		
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;		      		      
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<err<<per<<setprecision(2)<<(err)/ttl*100<<"%"<<endl;		     		      						      	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Maintainer's Judgment/Decision-Making issues?" <<endl;
	cout <<exp<<endl;
	cout << "1. Exceeded Ability" <<endl;
	cout << "2. Misjudged/Misperceived" <<endl;
	cout << "3. Misdiagnosed Situation" <<endl;		
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");


//Question 29
    cout <<nex<<endl;
    cout <<seps<<endl; 
    cout << "Was there any Maintainer's Attention/Memory issues?" <<endl;
	cout <<exp<<endl;
	cout << "1. Omitted Procedural Step" <<endl;
	cout << "2. Distraction/Interruption" <<endl;
	cout << "3. Failed to Recognize Condition" <<endl;
	qn = qn + 1;	
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		err = err + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;		      		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<err<<per<<setprecision(2)<<(err)/ttl*100<<"%"<<endl;	     		
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;		      		      
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<err<<per<<setprecision(2)<<(err)/ttl*100<<"%"<<endl;	     		      						      	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Maintainer's Attention/Memory issues?" <<endl;
	cout <<exp<<endl;
	cout << "1. Omitted Procedural Step" <<endl;
	cout << "2. Distraction/Interruption" <<endl;
	cout << "3. Failed to Recognize Condition" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");


//Question 30
    cout <<nex<<endl;
    cout <<seps<<endl; 
    cout << "Was there any Maintainer's Skill/Technique based issues?" <<endl;
	cout <<exp<<endl;
	cout << "1. Poor Technique" <<endl;
	cout << "2. Inadequate Skills" <<endl;
	cout << "3. Inappropriate Technique" <<endl;
	qn = qn + 1;	
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		err = err + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;		      		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<err<<per<<setprecision(2)<<(err)/ttl*100<<"%"<<endl;		     		
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;	      		      
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<err<<per<<setprecision(2)<<(err)/ttl*100<<"%"<<endl;			     		      						      	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Maintainer's Attention/Memory issues?" <<endl;
	cout <<exp<<endl;
	cout << "1. Poor Technique" <<endl;
	cout << "2. Inadequate Skills" <<endl;
	cout << "3. Inappropriate Technique" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");


//Maintainer's violations check

//Question 31
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Maintenance Routine violation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Inappropriate Tools/Equipment" <<endl;
	cout << "2. Procedures Skipped/Reordered" <<endl;
	cout << "3. Did Not Use Publication" <<endl;
	qn = qn + 1;	
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		vio = vio + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err+vio))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err+vio)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;	
    	cout <<setprecision(0)<<vio<< " MAINTAINER'S VIOLATION FOUND"<<per<<setprecision(2)<<vio/ttl*100<<"%" <<endl;		      		        		      		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<(err+vio)<<per<<setprecision(2)<<(err+vio)/ttl*100<<"%"<<endl;			     		
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err+vio))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err+vio)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;	
      	cout <<setprecision(0)<<vio<< " MAINTAINER'S VIOLATION FOUND"<<per<<setprecision(2)<<vio/ttl*100<<"%" <<endl;		      		        		      		      		      		      
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<(err+vio)<<per<<setprecision(2)<<(err+vio)/ttl*100<<"%"<<endl;		     		      						      	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Maintainance Routine violation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Inappropriate Tools/Equipment" <<endl;
	cout << "2. Procedures Skipped/Reordered" <<endl;
	cout << "3. Did Not Use Publication" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");	


//Question 32
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Maintenance Flagrant violation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Gundecking Qualifications" <<endl;
	cout << "2. Not Using Required Equipment" <<endl;
	cout << "3. Signed-off Without Inspection" <<endl;
	qn = qn + 1;	
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		vio = vio + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err+vio))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err+vio)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;	
    	cout <<setprecision(0)<<vio<< " MAINTAINER'S VIOLATION FOUND"<<per<<setprecision(2)<<vio/ttl*100<<"%" <<endl;		      		        		      		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<(err+vio)<<per<<setprecision(2)<<(err+vio)/ttl*100<<"%"<<endl;	     		
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err+vio))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err+vio)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;	
      	cout <<setprecision(0)<<vio<< " MAINTAINER'S VIOLATION FOUND"<<per<<setprecision(2)<<vio/ttl*100<<"%" <<endl;		      		        		      		      		      		      
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<(err+vio)<<per<<setprecision(2)<<(err+vio)/ttl*100<<"%"<<endl;		     		      						      	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Maintainance Flagrant violation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Gundecking Qualifications" <<endl;
	cout << "2. Not Using Required Equipment" <<endl;
	cout << "3. Signed-off Without Inspection" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");


//Question 33
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Maintenance Infraction violation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Inappropriate Tools/Equipment" <<endl;
	cout << "2. Procedures Skipped/Reordered" <<endl;
	cout << "3. Did Not Use Publication" <<endl;
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		vio = vio + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err+vio))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err+vio)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;	
    	cout <<setprecision(0)<<vio<< " MAINTAINER'S VIOLATION FOUND"<<per<<setprecision(2)<<vio/ttl*100<<"%" <<endl;		      		        		      		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<(err+vio)<<per<<setprecision(2)<<(err+vio)/ttl*100<<"%"<<endl;		     		
        cout <<seps<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err+vio))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err+vio)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;	
      	cout <<setprecision(0)<<vio<< " MAINTAINER'S VIOLATION FOUND" <<per<<setprecision(2)<<vio/ttl*100<<"%"<<endl;		      		        		      		      		      		      
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "SUB-TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<(err+vio)<<per<<setprecision(2)<<(err+vio)/ttl*100<<"%"<<endl;		     		      						      	
        cout <<seps<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Maintainance Infraction violation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Inappropriate Tools/Equipment" <<endl;
	cout << "2. Procedures Skipped/Reordered" <<endl;
	cout << "3. Did Not Use Publication" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");


//Question 34
    cout <<nex<<endl;
    cout <<seps<<endl; 
	cout << "Was there any Maintenance Exceptional violation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Gundecking Qualifications" <<endl;
	cout << "2. Not Using Required Equipment" <<endl;
	cout << "3. Signed-off Without Inspection" <<endl;		
	qn = qn + 1;
	do
	{
		cin >> ans;
		if (ans == "y" || ans == "Y")
		{
		vio = vio + 1;
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<sepl<<endl;
    cout <<"-----------------------------------------------------FINAL RESULTS----------------------------------------------------------"<<endl;
    cout <<sepl<<endl;	
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err+vio))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
	cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err+vio)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;	
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND"<<per<<setprecision(2)<<org/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR FOUND"<<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR FOUND"<<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR FOUND" <<per<<setprecision(2)<<wks/ttl*100<<"%"<<endl;	
  		cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR(S) FOUND" <<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;
    	cout <<setprecision(0)<<vio<< " MAINTAINER'S VIOLATION FOUND"<<per<<setprecision(2)<<vio/ttl*100<<"%" <<endl;		      		        		      		
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<(err+vio)<<per<<setprecision(2)<<(err+vio)/ttl*100<<"%"<<endl;		     		
        cout <<seps<<endl;
        cout <<sepl<<endl;
        cout <<"------------------------------------------------------THE END---------------------------------------------------------------"<<endl;
        cout <<sepl<<endl;
		}
		else if (ans == "n" || ans == "N")
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;
	cout <<com<<fixed<<setprecision(0)<<qn/ttl*100<<"%"<<endl;
    cout <<sepl<<endl;
    cout <<"-----------------------------------------------------FINAL RESULTS----------------------------------------------------------"<<endl;
    cout <<sepl<<endl;	
    cout <<res<<setprecision(2)<<(ttl-(org+sup+med+crw+red+env+eqp+wks+err+vio))/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
		cout <<thr<<fixed<<setprecision(2)<<(org+sup+med+crw+red+env+eqp+wks+err+vio)/ttl*100<<"%"<<endl;
    cout <<seps<<endl;
    cout <<sec<<endl;      	
    cout <<seps<<endl;
		cout <<setprecision(0)<<org<< " ORGANIZATIONAL ERROR(S) FOUND" <<per<<setprecision(2)<<org/ttl*100<<"%"<<endl;
		cout <<setprecision(0)<<sup<< " SUPERVISORY ERROR(S) FOUND" <<per<<setprecision(2)<<sup/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<med<< " MEDICAL ERROR(S) FOUND" <<per<<setprecision(2)<<med/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<crw<< " CREW COORDINATION ERROR(S) FOUND" <<per<<setprecision(2)<<crw/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<red<< " READINESS ERROR(S) FOUND" <<per<<setprecision(2)<<red/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<env<< " ENVIROMENTAL ERROR(S) FOUND" <<per<<setprecision(2)<<env/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<eqp<< " EQUIPMENTS ERROR(S) FOUND" <<per<<setprecision(2)<<eqp/ttl*100<<"%" <<endl;
		cout <<setprecision(0)<<wks<< " WORKSPACE ERROR(S) FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;
    	cout <<setprecision(0)<<err<< " MAINTAINER'S ERROR(S) FOUND"<<per<<setprecision(2)<<err/ttl*100<<"%" <<endl;
      	cout <<setprecision(0)<<vio<< " MAINTAINER'S VIOLATION FOUND" <<per<<setprecision(2)<<vio/ttl*100<<"%"<<endl;		      		        		      		      		      		      
        cout <<seps<<endl;
    cout <<fst<<endl;      	
    cout <<seps<<endl;			
  		cout << "TOTAL MANAGEMENT CONDITIONS = " <<setprecision(0)<<(org+sup)<<per<<setprecision(2)<<(org+sup)/ttl*100<<"%"<<endl;
		cout << "TOTAL MAINTAINER CONDITIONS = " <<setprecision(0)<<(med+crw+red)<<per<<setprecision(2)<<(med+crw+red)/ttl*100<<"%"<<endl;
		cout << "TOTAL WORKING CONDITIONS = "<<setprecision(0)<<(env+eqp+wks)<<per<<setprecision(2)<<(env+eqp+wks)/ttl*100<<"%"<<endl;	
   		cout << "TOTAL MAINTAINER'S ACTS = " <<setprecision(0)<<(err+vio)<<per<<setprecision(2)<<(err+vio)/ttl*100<<"%"<<endl;		     		      						      	
        cout <<seps<<endl;
        cout <<sepl<<endl;
        cout <<"------------------------------------------------------THE END---------------------------------------------------------------"<<endl;
        cout <<sepl<<endl;
		}
		else
		{
        system("cls"); 
    cout <<sepl<<endl;
    cout <<title<<endl;
    cout <<sepl<<endl;       
    cout <<"\n"<<sepm<<endl;
    cout <<unr<<endl;
    cout <<sepm<<endl;
	cout << "Was there any Maintainance Exceptional violation?" <<endl;
	cout <<exp<<endl;
	cout << "1. Gundecking Qualifications" <<endl;
	cout << "2. Not Using Required Equipment" <<endl;
	cout << "3. Signed-off Without Inspection" <<endl;	
	    }	
	}
	while (ans != "y" && ans != "Y" && ans != "n" && ans != "N");


	return 0;
}
