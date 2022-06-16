#include<stdio.h>
/*
QUESTION] WRITE A PROGRAM TO FIND OUT WHETHER A STUDENT IS PASS OR FAIL, IF IT REQUIRES TOTAL 40% AND AT LEAST 33% IN EACH SUBJECT TO PASS. 
ASSMUE THREE SUBJECTS AND TAKE INPUT FROM USER.
*/
int main()
{
float maths, chem, phy, maths_1, chem_1, phy_1, agg, agg_1;
    printf("Enter MATHS marks(out of 100):");
    scanf("%f",&maths);    
    printf("Enter PHYSICS marks(out of 100):");
    scanf("%f",&phy);    
    printf("Enter CHEMISTRY marks(out of 100):");
    scanf("%f",&chem);
    agg = maths+phy+chem;
    agg_1=agg/300;
    maths_1 = maths/100;
    phy_1 = phy/100;
    chem_1 = chem/100;
    if (agg_1>=.40 && maths_1>=.33 && phy_1>=.33 && chem_1>=.33)
    {
        printf("Congratulations you have passed the test.");
    }
    else{
        printf("Sorry you have failed the test.");
    }
    
    return 0;
}