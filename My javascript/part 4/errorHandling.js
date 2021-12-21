let a = "atharv thombre";
a = undefined;
//pretend this response coming form server as response
if (a != undefined) {
  throw new Error("the is defined");
} else {
  console.log("this is undefined");
}


try {
  console.log("we are inside the try block");
  errorFunction();
} catch (error) {
  console.log(error);
  console.log("An error Has been occured by reference error");
  console.log(error.name);
  console.log(error.massage);
} finally {
  console.log("Finally we will RUN CODE");
}

//there are so many types of error in the Error handilng
