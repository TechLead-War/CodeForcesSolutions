<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title></title>
  </head>
   <body>
     <h1>We are learning JS</h1>
      <script type="text/javascript">
        var str= prompt("Enter Name");
        var k = parseInt(prompt("Enter k"));
        for(var i = 0; i < str.length; i = i + k){
          var temp = str.slice(i,i + k);
          temp1 = temp.split("").reverse().join("");
          str = str.replace(temp,temp1);
          i += k;
        }
        document.write(str);
      </script>
  </body>
</html>
