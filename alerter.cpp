#include <iostream>
#include <assert.h>
#include "alerter.h"


int networkAlerter(float celcius) {
    //Real Time Network Communication
}

float convertFarenheitToCelcius(float farenheit)
{
    return (farenheit - 32) * 5 / 9;
}

void alertInCelcius(float farenheit,FunctionPointer aleter) {
    float celcius =convertFarenheitToCelcius(farenheit);
    int returnCode = aleter(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
}


int main() {
    alertInCelcius(400.5,&networkAlerter);
    alertInCelcius(303.6,&networkAlerter);
    
    
    return 0;
}
