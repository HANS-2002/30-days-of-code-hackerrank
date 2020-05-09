

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string f, string l, int i, vector<int> t):Person(f,l,i)
        {
            testScores = t;
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            int sum = 0;
            for(int i=0;i<testScores.size();i++)
            {
                sum += testScores[i];
            }
            int a = sum/testScores.size();
            if(a<=100 && a>=90)return 'O';
            else if(a<90 && a>=80)return 'E';
            else if(a<80 && a>=70)return 'A';
            else if(a<70 && a>=55)return 'P';
            else if(a<55 && a>=40)return 'D';
            else return 'T';
        }
};

