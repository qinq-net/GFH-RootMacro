//------------------------------------------------------------------------------------
//
//                ROOT Class -- TF1
//
//  ROOT Class can be found https://root.cern.ch/doc/v614/classTF1.html
//
//------------------------------------------------------------------------------------



//------------------------------------------------------------------------------------------------
1.  How to use TF1 to draw and fit 

    //Case 1: inline expression using standard C++ functions/operators
    TF1 *fa1 = new TF1("fa1","sin(x)/x",0,10);
    fa1->Draw();
    
    //Case 2: inline expression using a ROOT function (e.g. from TMath) without parameters
    TF1 *fa2 = new TF1("fa2","TMath::DiLog(x)",0,10);
    fa2->Draw();

    //user defined functions must be intialed 
    fa->SetParameter(0,value_first_parameter);
    fa->SetParameter(1,value_second_parameter);
    fa->SetParameter(1.1,1.0); // initialize two parameters 
    
    //set parameter name
    fa->SetParName(0,"Constant");

    
    
//-------------------------------------------------------------------------------------------------
