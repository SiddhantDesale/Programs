// Array Methods

let num = [1, 2, 3, 4, 5];
console.log(num);

// tostring()
let string = num.toString();
console.log(string);

// join()
let join1 = num.join("_");
console.log(join1);

// pop()
let iRet = num.pop();   // removes last element and returns the poped element
console.log(num,iRet);

// push()
let iRet1 = num.push(6);  // adds element at the last & returns the new array length
console.log(num, iRet1);

// shift()
let iRet2 = num.shift();  // removes first element and returns the poped element
console.log(iRet2,num);

// unshift()
let iRet3 = num.unshift(55);  // adds element at the first & returns the new array length
console.log(iRet3,num);

// delete
let iRet4 = delete num[2];
console.log(iRet4,num);

// concat()
let arr1 = [1,2,3,4];
let arr2 = [5,6,7,8];
let arr3 = [9,10];

let Ans = arr1.concat(arr2);
console.log(Ans);

Ans = arr1.concat(arr2,arr3);
console.log(Ans);

// Sort()
let nums = [45,35,64,234,67];
console.log(nums.sort());