function rot13(str) { // LBH QVQ VG!
  
    var string = "";
    for(var i = 0; i < str.length; i++) {
      var temp = str.charAt(i);
      if(temp !== " " || temp!== "!" || temp!== "?") {
         string += String.fromCharCode(13 + String.prototype.charCodeAt(temp));
      } else {
        string += temp;
      }
    }
    
    return string;
  }
  
console.log(rot13("SERR PBQR PNZC"));