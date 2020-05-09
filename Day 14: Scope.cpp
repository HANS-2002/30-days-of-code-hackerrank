

	// Add your code here
    Difference(vector<int> e)
    {
        elements = e;
        maximumDifference=0;
    }

    void computeDifference()
    {
        for(int i=0;i<elements.size()-1;i++)
        {
            for(int j=i+1;j<elements.size();j++)
            {
                int diff = abs(elements[i]-elements[j]);
                if(diff>maximumDifference)maximumDifference = diff;
            }
        }
    }
