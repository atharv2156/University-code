
function fruitIterators(values){
     let nextIndex = 0;
     //we will return an object
     return{
         next: function(){  
             if(nextIndex < values.length){
                 //we will return this objext
               return {
                    value: values[nextIndex++],
                    done: false
                }
            }
                else{
                    //we will return below object with done
                    return{
                        done: true
                    }
                }
           }
        }
    }




const myArray = ['apple','grapes','oranges','carrot'];
console.log(myArray);
//using th  itrators
const fruits = fruitIterators(myArray);
console.log(fruits.next());
console.log(fruits.next());
console.log(fruits.next().value);
console.log(fruits.next().value);
console.log(fruits.next().value);
