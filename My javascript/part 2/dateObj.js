let Today = new Date()
// console.log(typeof Today);
let otrDate = new Date('9-27-2002 01:01:00');
otrDate = new Date('Dec 22 1920');
// console.log(otrDate);
//MM/DD/YYYY Format
let a ;
 a = otrDate.getDay();
 a = otrDate.getDate();
 a = otrDate.getMinutes();
 a = otrDate.getHours();
 a = otrDate.getSeconds();
//  a = otrDate.getMiliseconds();
//  a = otrDate.getMonths();
otrDate.setDate(22);
otrDate.setMonth(3);
otrDate.setFullYear(1990);
console.log(otrDate);

 console.log(a)
