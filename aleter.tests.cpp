#include "alerter.h"
#include <gtest/gtest.h>

//Fake Dependency
int networkAlertStub(float celcius) {
    //std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    if(celcius <= 200)
    {
        return 200;
    }
    else {
        return 500;
    }
}

TEST(Suite,TestCaseName){

alertInCelcius(400.5,&networkAlertStub);
    //state based Testing
    ASSERT_EQ(alertFailureCount==1);//bug detected
}
