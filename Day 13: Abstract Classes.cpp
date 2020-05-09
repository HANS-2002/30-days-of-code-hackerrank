

class MyBook:public Book
{
    int price;
    public:
// Write your MyBook class here

    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    MyBook(string t, string a, int p):Book(t, a)
    {
        price = p;
    }  
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display()
    {
        cout<<"Title: ";
        for(int i=0;i<title.size();i++)cout<<title[i];
        cout<<endl<<"Author: ";
        for(int i=0;i<author.size();i++)cout<<author[i];
        cout<<endl<<"Price: "<<price;
    }
    
// End class
};

