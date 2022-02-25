<!DOCTYPE html>
<html lang='en'>
<head>
<link href="//netdna.bootstrapcdn.com/twitter-bootstrap/2.3.2/css/bootstrap-combined.min.css" rel="stylesheet">
<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<meta name="author" content="ilker">
	<title>Giriş Sayfası</title>
    <link rel="stylesheet" href="stil2.css">
    
</head>
<body>
<div id="login" class="container">
    <section id="merkez"> <img src="mirdev.jpg" alt="logo" height="500px" width="350px"> </section>
  <div class="row-fluid">
    
    <div class="span12">
       
      <div class="login well well-small">
        
        <div class="center">
         <p style="color:black;font-family:calibri bold;font-size: 20px;">ASAC v1.0</p>
         
        </div>
        <form action="<?php echo $_SERVER['PHP_SELF']; ?>"  class="login-form" id="UserLoginForm" method="post" accept-charset="utf-8">
          <div class="control-group">
            <div class="input-prepend">
              <span class="add-on"><i class="icon-user"></i></span>
              <input name="newU"  placeholder="New Username" maxlength="255" type="text" id="yeniU" > 
            </div>
			<div class="input-prepend">
              <span class="add-on"><i class="icon-user"></i></span>
              <input name="retU"  placeholder="Retype Username" maxlength="255" type="text" id="tekU" > 
            </div>
            
             <div class="control-group">
            <input class="btn btn-primary btn-large btn-block" name="durumK" type="submit"  value="Change Username"> 
          </div>
            
            </br>
            
          </div>
          <div class="control-group">
            <div class="input-prepend">
              <span class="add-on"><i class="icon-lock"></i></span>
              <input name="newP"  placeholder="Password" type="password" id="yeniP" > 
            </div>
			<div class="input-prepend">
              <span class="add-on"><i class="icon-lock"></i></span>
              <input name="retP"  placeholder="Retype Password" type="password" id="tekP" > 
            </div>
            
            
             <div class="control-group">
            <input class="btn btn-primary btn-large btn-block" name="durumS"  type="submit"  value="Change Password"> 
          </div>
            
            
          </div>
          
         
          
           <div class="control-group">
            <input class="btn btn-primary" id="geriButon" value="Back" type="submit" formaction="simLed.php" > 
          </div>
          
           <div >
            <p id="uyari" style="margin-left:30px;color:red;display:none;">Kullanici Adi veya Şifre Hatalı</p>
          </div>
          
        </form>
        
      </div>
    </div>
  </div>
</div>

<?php
require('config.php');
  session_start();
  if ($_SERVER["REQUEST_METHOD"]!="POST") {
      
      //header("Location:index.php");
      //exit();
    } 
  else{ 
     
  if (isset($_POST["durumK"]))//Kullanıcı adi degistir butonuna tıklandıysa
  {
      
     $yeni_kullanici=$_POST["newU"];
     $tekrar_kullanici=$_POST["retU"];
     
     if($yeni_kullanici=="" ||$tekrar_kullanici=="") //Alanlardan en az biri boş ise
     {
        
       echo '<script type="text/javascript">alert("Alanlar boş geçilemez!!");</script>';
         
     }
     else //ikiside boş değilse
     {
        
      if($yeni_kullanici==$tekrar_kullanici) 
      {
        $HOST='localhost';
        $DATABASE_NAME='id17064250_mydb';
        $USER_NAME='id17064250_dbuser';
        $PASSWORD="-?**!3|=7W>y4T79";
            $sqlKod;
            try
            {
            $sqlKod=new PDO("mysql:host=".$HOST.";dbname=".$DATABASE_NAME.";charset=UTF8",$USER_NAME,$PASSWORD);
            $sqlKod->setAttribute(PDO::ATTR_DEFAULT_FETCH_MODE,PDO::FETCH_OBJ);
            }
            catch(PDOException $pe){
                die("Hata:".$pe->getMessage());
              }
            
           
            //echo $_SESSION["kullanici"];
            //echo $_SESSION["sifre"];
            
             
             /*$veriler=$sqlKod->prepare("UPDATE  kisiler SET  isim= ? WHERE isim=?");
             $veriler->execute(array($yeni_kullanici,$_SESSION["kullanici"]));
             $count = $veriler->rowCount();*/


             $ilk_veri="admin";
             $ikinci_veri=md5(md5("123456"));

             $veriler=$sqlKod->prepare("SELECT * FROM kisiler WHERE isim= ? and sifre= ?");
             $veriler->execute(array($ilk_veri,$ikinci_veri));
             $count = $veriler->rowCount();
             
            if($count==1)
            {
               echo '<script type="text/javascript">alert("Kullanıcı Adı başarı ile değiştirildi!!");</script>';
            }
            else
            {
                 echo '<script type="text/javascript">alert("Kullanıcı Adı  değiştirilemedi!!");</script>';
            }
            
             $sqlKod=NULL;
        }
        else //Girilen inputlar eşit değilse hata bas.
        {
             echo '<script type="text/javascript">alert("Kullanıcı Adları uyuşmuyor!!");</script>';
        }
         
     }
     

     
  }
  
      
  if (isset($_POST["durumS"]))
  {
      
    
  }
}
   
    
?>


</body>
</html>