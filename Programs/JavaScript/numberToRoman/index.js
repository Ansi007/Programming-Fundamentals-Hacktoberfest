var intToRoman = function (num) {
    const map = {
      M: 1000,
      CM: 900,
      D: 500,
      CD: 400,
      C: 100,
      XC: 90,
      L: 50,
      XL: 40,
      X: 10,
      IX: 9,
      V: 5,
      IV: 4,
      I: 1,
    };
  
    let res = "";
  
    for (key in map) {
      const rCounter = Math.floor(num / map[key]);
  
      if (rCounter !== 0) {
        res += key.repeat(rCounter);
      }
  
      num %= map[key];
  
      if (num === 0) return res;
    }
  
    return res;
  };

intToRoman(50)