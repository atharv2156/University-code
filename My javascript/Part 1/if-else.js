const age = 18;

if(age > 20){
    console.log('you can enter');
}
// if(age != 19){
// console.log('age is not 19')
// }

// if(age !== 20){
//     console.log('you are not in middle')
// }
else if(age === 20){
    console.log('you are in middle');
    //tripple equle can differ between string and integer
}
else{
    console.log('you cannot enter');
}

//to check a variabel is defined or not
let variabel = 0;
 if(typeof variabel !== 'undefined'){
     console.log('variable is defined');
 }
 else{
     console.log('variabel is not defined');
 }
 
 //boolean statemets
 const jon = true;
 if(jon || age > 18){
     console.log('you can drive');
 }
 else{
     console.log('cannot drived');
 }

 //turnery oprator
 console.log(age == 45? 'age is 45':'age is not 45');


 //SWITCH case
 switch(age){
         case 18:
            console.log('you are 18');
            break;
         
         case 28:
            console.log('you are 28');
            break;

         case 30:
             console.log('you are 30');
             break;
            
          case 33:
              console.log('you are 33');
              break;
             
              default:
                  console.log('you are age is unknown');
                  break;
            
        
 }