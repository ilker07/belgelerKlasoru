
<!DOCTYPE html>
<html lang='en'>
<head>
  
    <link href='https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css' rel='stylesheet' integrity='sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6' crossorigin='anonymous'>
    
    <title>ESP8266 KONTROL</title>
</head>
<body>
    
    
    <div class='alert alert-primary'>
    <form action='esp.php' method='POST' onsubmit='return dogrula()'>

        <div class='mb-3'>
            <label for='kullaniciAdi' class='form-label'>Kullanici Adi</label>
            <input type='text' class='form-control' id='kullaniciAdi' name='kullaniciAdiAlani'>
        
        </div>

      <p id='kullaniciAdiUyari' style='display:none;'></p>

        <div class='mb-3'>
            <label for='sifre' class='form-label'>Sifre</label>
            <input type='password' class='form-control' id='sifre' name='sifreAlani'>
        </div>

        <p id='sifreUyari' style='display:none;'></p>

        <p id='bilgi' style='display:none;'></p>
    
       <button type="submit" class='btn btn-primary'>Gonder</button>

   </form>
    
    
    </div>

    </div>
    
    <script>
     function dogrula()
     {
       var kullaniciKontrol,kullaniciUyarma,sifreKontrol,sifreUyarma,bilgilendirme;
       kullaniciKontrol=document.getElementById('kullaniciAdi').value;
       kullaniciUyarma=document.getElementById('kullaniciAdiUyari');
       sifreKontrol=document.getElementById('sifre').value;
       sifreUyarma=document.getElementById('sifreUyari');

       bilgilendirme=document.getElementById('bilgi');
       
       if(kullaniciKontrol=='')
       {
        kullaniciUyarma.style.display='block';
        kullaniciUyarma.innerHTML='Kullanıcı Adı boş olamaz!';
        bilgilendirme.style.display='none';
        return false;
       }
       if(sifreKontrol=='')
       {
        sifreUyarma.style.display='block';
        kullaniciUyarma.style.display='none';
        sifreUyarma.innerHTML='Şifre boş olamaz!';
        return false;
       }
      
       if(kullaniciKontrol!='ilker' || sifreKontrol!='123456')
       {
           kullaniciUyarma.style.display='none';
           sifreUyarma.style.display='none';
           bilgilendirme.style.display='block';
           bilgilendirme.innerHTML='Kullanici Adi veya şifre hatalı!';
           return false;
       }
    

     }

     if (performance.navigation.type == 1) 
     {

      //window.location = 'http://localhost:8888/#nominate';
      //window.location.assign('http://192.168.1.6/');
     }
       //window.location.replace('192.168.1.35');
       //window.location.assign("192.168.1.35");
       //window.location.assign("https://www.w3schools.com");
    </script>


</body>


</html>
