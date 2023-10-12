let btn1;
let show = "";
const print = function (val) {};
let val = document.getElementById("btn1").value;
document.getElementById("btn1").onclick = function () {
  show += "1";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn2").onclick = function () {
  show += "2";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn3").onclick = function () {
  show += "3";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn4").onclick = function () {
  show += "4";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn5").onclick = function () {
  show += "5";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn6").onclick = function () {
  show += "6";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn7").onclick = function () {
  show += "7";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn8").onclick = function () {
  show += "8";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn9").onclick = function () {
  show += "9";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn0").onclick = function () {
  show += "0";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn_add").onclick = function () {
  show += "+";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn_sub").onclick = function () {
  show += "-";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn_mult").onclick = function () {
  show += "*";
  document.getElementById("shower").innerHTML = show;
};
document.getElementById("btn_div").onclick = function () {
  show += "/";
  document.getElementById("shower").innerHTML = show;
};

document.getElementById("btn_ac").onclick = function () {
  show = "";
  document.getElementById("shower").innerHTML = show;
};

document.getElementById("btn_dlt").onclick = function () {
  show = show.substring(0, show.length - 1);
  document.getElementById("shower").innerHTML = show;
};
