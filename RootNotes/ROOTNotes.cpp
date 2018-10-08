//*************************************************************************************
//
//    ROOT study notes, write down the new usages of root for convinience
// 
//*************************************************************************************




//----------------------------------------------------------------------------------------------------------------------------------
1. definition of a function, and how to use this function


   //------ definition of a function with two variables theFunc(y) and x -------------------------------------
   double TF1Derivative(TF1 * theFunc, double x, double step = 0.001)
   {
     return (theFunc->Eval(x-2*step)-8*theFunc->Eval(x-step)+8*theFunc->Eval(x+step)-theFunc->Eval(x-2*step))/(12*step);
   }
   
   //------- use this function to calculate ----------------
   TF1 * FitFunc = LightEnergyGraph[i][j]->GetFunction("pol5");  //polynomial fitting 
   double Energy = EnergyValues[i][j][0]+ (EnergyValues[i][j][EnergyValues[i][j].size()-1]-EnergyValues[i][j][0])*(k+1)/NumSteps - (EnergyValues[i][j][EnergyValues[i][j].size()-1]-EnergyValues[i][j][0])*0.5/NumSteps;  // given an energy values
   
   double Derivative = TF1Derivative(FitFunc,Energy);  // get the derivative values
   
   
//------------------------------------------------------------------------------------------------------------------------------------
