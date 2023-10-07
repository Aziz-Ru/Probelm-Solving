let cnt=0;

document.getElementById("increseBtn").onclick =function(){
    cnt+=1;
    document.getElementById("cnt").innerHTML=cnt;
}
document.getElementById("ResetBtn").onclick =function(){
    cnt=0;
    document.getElementById("cnt").innerHTML=cnt;
}
document.getElementById("DecreseBtn").onclick =function(){
    cnt-=1;
    document.getElementById("cnt").innerHTML=cnt;
}
document.getElementById("RandomBtn").onclick =function(){
    cnt=Math.floor(Math.random()*1000+1);
    document.getElementById("cnt").innerHTML=cnt;
}