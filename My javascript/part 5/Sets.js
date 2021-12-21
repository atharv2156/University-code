const mySet = new Set();//set stores unique values
//addding values to set
console.log('my set looks like this : ',mySet);


//it has properties like sets in maths

mySet.add('atharv');
mySet.add('is ');
mySet.add('my Name');
mySet.add(67);
mySet.add(true);
mySet.add(false);

//no repetetion/duplicate allowed entries

let mySet2 = new Set([1, 45 , 'atharv' , false , {A:3 , B:8}]);
console.log('my set looks like this : ',mySet2);
console.log(mySet2.size);
console.log(mySet2.has(45));//it have that elemet or dont have

console.log('before removal',mySet2 , mySet2.has('atharv'));
mySet2.delete('atharv')
console.log('after removal',mySet2 , mySet2.has('atharv'));

//iterating the set
for(let item of mySet2){
    console.log('my set has :' ,item);
}

//method 2
mySet.forEach((item)=>{
    console.log('item is ',item );
    
})
//to make an arry of set
const nums = [1,2,3,3,4,4,5,2,6,7,8,9,9,6,7,];
const setNums = new Set(nums);
const setTOarray = Array.from(setNums);
console.log(setTOarray)
