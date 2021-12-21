//object oriented programs

//Object literal for creating objects
let objCar = {
    name: 'RR',
    speed: 150,
    run : function run(){
    console.log('car is running')
    }
}
console.log(objCar);

// /creating constructrors for cars
function genCar(carName , topSpeed){
    this.name = carName;
    this.topSpeed = topSpeed;
    console.log(`${this.name} is running`);

    this.comparsionSpeed = function(){
        console.log(`this car is slower than ${300 - this.topSpeed} KM/Hr than bugatti varoyan`);
    }

} 


car1 = new genCar('Nissan',142);
car2 = new genCar('Toyota',161);
car3 = new genCar('Mercedicz benz',188);