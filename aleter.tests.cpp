#include "alerter.h"
#include <gtest/gtest.h>

//Fake Dependency
float celciusArgValue;
int networkAlertMock(float celcius) {
    celciusArgValue=celcius;
    if(celcius <= 200)
    {
        return 200;
    }
    else {
        return 500;
    }
}

TEST(Suite,TestCaseName){
float expectedCelciusToBeReceived=204.72222;
alertInCelcius(400.5,&networkAlertMock);
    //state based Testing
    ASSERT_EQ(alertFailureCount==1);//bug detected
    EXPECT_EQ(celciusArgValue,expectedCelciusToBeNotified) ; //Behavior Testing
    
}
