<?php
require ("config.php");
function guncelle($post1,$post2,$columnn_name,$sess)
{

    $degisken1=$_POST[$post1];
    $degisken2=$_POST[$post2];
    
    if($degisken1=="" ||$degisken2=="") //Alanlardan en az biri boş ise
    {
       
      echo '<script type="text/javascript">alert("Alanlar boş geçilemez!!");</script>';
        
    }
    else //ikiside boş değilse
    {
       
     if($degisken1==$degisken2) 
     {
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
          
            
            $veriler=$sqlKod->prepare("UPDATE  kisiler SET  $columnn_name= ? WHERE $columnn_name=?");  //isim yerine $ne
            $veriler->execute(array($degisken1,$_SESSION[$sess]));
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

?>