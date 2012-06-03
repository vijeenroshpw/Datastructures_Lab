
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title>Watch The Artist online - Watch Movies Online, Full Movies, Download</title>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<meta name="author" content="Movie2k.to" />
        <meta property="og:title" content="Watch The Artist online!" />
        <meta property="og:type" content="movie" />
        <meta property="og:url" content="http://www.movie2k.to/watch-The-Artist-online.html" />
        <meta property="og:image" content="http://img.movie2k.to/thumbs/cover-1226063-The-Artist-movie2k-film.jpg" />
        <meta property="og:site_name" content="Movie2k.to" />
        <meta property="fb:admins" content="100002088007031" />
        <meta name="description" content="Watch The Artist online for free. Download The Artist movie at movie2k.to">
<meta name="keywords" content="download The Artist, watch The Artist, The Artist movie, The Artist online, The Artist stream">
<meta name="robots" content="index,follow">
<meta name="revisit-after" content="1 days" />
<meta http-equiv="content-language" content="en">
<meta name="google-site-verification" content="i93N_RIbAd5JfXzsEFpWcC9XXJpU-plYDsuQnLN4heQ">
<link rel="stylesheet" media="all" href="all4.css">

<style type="text/css">
<!--
body {
	background-image: url(http://img.movie2k.to/img/background.gif);
	background-repeat: repeat-x;
}

-->
</style>



<script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/1.5.1/jquery.min.js"></script>

<SCRIPT>
	function onlylanguage(lang) {
		var a = new Date();
		a = new Date(a.getTime() +1000*60*60*24*365);
		document.cookie = 'onlylanguage='+lang+'; expires='+a.toGMTString()+';';
		location.reload();
	}
	function showMovie() {
	    location.href=(document.moviedropdown.movieurl[document.moviedropdown.movieurl.selectedIndex].value);
	}
	function showPart() {
	    location.href=(document.partdropdown.movieparturl[document.partdropdown.movieparturl.selectedIndex].value);
	}
</SCRIPT>

<SCRIPT language="javascript">
	function checkradio(feld){
		for (i=0; i<feld.length; i++){
				if(feld[i].checked == true){
					return feld[i].value;
				}
		}
	}
	function changeThumbnail() {
		if (checkradio(document.addmovie.thumbnail)=='upload') {
			document.getElementById('thumb_upload').style.display='block';
			document.getElementById('thumb_link').style.display='none';
		} else {
			document.getElementById('thumb_upload').style.display='none';
			document.getElementById('thumb_link').style.display='block';    			
		}
	}
	function changegenre() {
	    if (document.addmovie.xxx.checked==true) {
	        document.getElementById('genre_xxx').style.display = "block";
	        document.getElementById('xxxinfo').style.display = "block";
            document.getElementById('genre_nonxxx').style.display = "none";
	    } else {
	        document.getElementById('genre_xxx').style.display = "none";
            document.getElementById('genre_nonxxx').style.display = "block";	    	        
	    }
	}

    function showNewContent() {  
        $('#content').show('normal',hideLoader());  
    }  
    function hideLoader() {  
        $('#load').fadeOut('normal');  
    }  
    function showAutoComplete (searchtext) {
        if (searchtext.length>0) {
            document.getElementById('searchAutoComplete').style.display='inline';
            $('#searchAutoComplete').load('searchAutoCompleteNew.php?search='+escape(searchtext),'',showNewContent);
        }
        return false;
    }
    function closeAutoComplete() {
        document.getElementById('searchAutoComplete').style.display='none';   
        return true;
    }    

</SCRIPT>

<SCRIPT>
    function readCookie(name) {
    	var nameEQ = name + "=";
    	var ca = document.cookie.split(';');
    	for(var i=0;i < ca.length;i++) {
    		var c = ca[i];
    		while (c.charAt(0)==' ') c = c.substring(1,c.length);
    		if (c.indexOf(nameEQ) == 0) return c.substring(nameEQ.length,c.length);
    	}
    	return null;
    }

    function xxxCheck() {
        if (readCookie('xxx')=='ok') {
            return true;
        } else {
            var check=confirm('Please confirm you are 18 years or over before continuing. If you are not 18 please exit.');
            if (check==true) {
                var a = new Date();
                a = new Date(a.getTime() +60*60*24);
                document.cookie = 'xxx=ok; expires='+a.toGMTString()+';'; 
                return true;
            } else {
                return false;
            }
        }
    }
</SCRIPT>
<script type="text/javascript">
    function ignoreErrors() {
    return true;
    }
    window.onerror = ignoreErrors;
</script>


<script>
     img1 = new Image();  
     img1.src = "http://img.movie2k.to/img/movie2k_header_v4_1.jpg";
     img2 = new Image();  
     img2.src = "http://img.movie2k.to/img/background.gif";
     img3 = new Image();  
     img3.src = "http://img.movie2k.to/img/login/bg-button2.png";
     img4 = new Image();  
     img4.src = "http://img.movie2k.to/img/gb1.gif";
     img5 = new Image();  
     img5.src = "http://img.movie2k.to/img/titlebanner.png";
     img6 = new Image();  
     img6.src = "http://img.movie2k.to/img/close.png";
</script>

<!--[if lte IE 7]>
<style type="text/css">
.s2k_ad{
margin-left:-435px;
}
</style>
<![endif]-->



</head>
<body leftmargin="0" topmargin="0" marginwidth="0" marginheight="0">


        <style>
        #form-quicklogin {
        	border: 0;
        	margin: 0;
        	padding: 0;
        }
        
        fieldset.quick-login label {
        	font-size: 0.75em;
        }
        fieldset.quick-login input {
        	width: auto;
        }
        fieldset.quick-login input.inputbox {
        	width: 87px;
        	vertical-align: middle;
        	/* margin-right: 5px; */
        }
        
        fieldset.quick-login label {
        	white-space: nowrap;
        	padding-right: 2px;
        }
        input.button1, input.button2 {
        	/* font-size: 0.9em; */
        	font-size: 1em;
        }
        
        a.button1, input.button1, input.button3, a.button2, input.button2 {
        	background: #FAFAFA none repeat-x top left;
        	width: auto !important;
        	padding-top: 1px;
        	padding-bottom: 0px;
        }
        
        a.button1, input.button1 {
        	font-weight: bold;
        	border: 1px solid #666666;
        }
        
        input.button3 {
        	padding: 0;
        	margin: 0;
        	line-height: 5px;
        	height: 12px;
        	background-image: none;
        	font-variant: small-caps;
        }
        
        /* Alternative button */
        a.button2, input.button2, input.button3 {
        	border: 1px solid #666666;
        }
        
        /* <a> button in the style of the form buttons */
        a.button1, a.button1:link, a.button1:visited, a.button1:active, a.button2, a.button2:link, a.button2:visited, a.button2:active {
        	text-decoration: none;
        	color: #000000;
        	padding: 2px 8px;
        	line-height: 250%;
        	vertical-align: text-bottom;
        	background-position: 0 1px;
        }
        
        /* Hover states */
        input {
        	font-weight: normal;
        	cursor: pointer;
        	vertical-align: middle;
        	padding: 0 3px;
        	font-size: 1em;
        	font-family: Arial, Helvetica, sans-serif;
        }
        fieldset {
        	border-width: 0;
        	font-family: Arial, Helvetica, sans-serif;
        	font-size: 1.1em;
        }
        fieldset.submit-buttons {
        	vertical-align: middle;
        	margin: 5px 0px;
        }
        
        fieldset.submit-buttons input {
        	vertical-align: middle;
        	padding-top: 3px;
        	padding-bottom: 3px;
        }
        label input {
        	vertical-align: middle;
        }
        
        label img {
        	vertical-align: middle;
                 margin-top: 3px;
        }
        a.button1, input.button1, input.button3, a.button2, input.button2 { background-image: url("http://img.movie2k.to/img/login/bg-button2.png"); }
        a.button1:hover, input.button1:hover, a.button2:hover, input.button2:hover, input.button3:hover { background-position: 0 -25px; }

/* Buttons */

a.button1,

a.button2,

a.button3,

input.button1,

input.button2,

input.button3 {

 background: 0 top repeat-x;

 border-radius: 5px; -moz-border-radius: 5px; -webkit-border-radius: 5px;

 box-shadow: -1px 2px 2px rgba(0, 0, 0, 0.55);

 -moz-box-shadow: -1px 2px 5px rgba(0, 0, 0, 0.55);

 -webkit-box-shadow: -1px 2px 2px rgba(0, 0, 0, 0.55);

}
a.button1:hover,

a.button2:hover,

a.button3:hover,

input.button1:hover,

input.button2:hover,

input.button3:hover {

 background-position: 0 -25px;

}
a.button1, input.button1, input.button3, a.button2, input.button2 {
    background: url("http://img.movie2k.to/img/login/bg_button.gif") repeat scroll 0 0 #FAFAFA;
    color: #FFFFFF;
    font-family: Arial,Helvetica,sans-serif;
    font-weight: normal;
}
a.button1, input.button1, input.button3, a.button2, input.button2 {
    background-image: url("http://img.movie2k.to/img/login/bg-button2.png");
}


    </style>
        <div style="position:absolute;top:230px;left:710px;" id="dvg-loginform">
            <fieldset class="quick-login">
                <p id="form-quicklogin">
            		<form method="post" action="login.php?ua=login" >
            			<label for="username"><img style="padding-bottom:3px;" src="http://img.movie2k.to/img/login/profile.gif" alt="Username"></label><input type="text" name="username" size=10 id="username" class="inputbox" title="Username" value="Username" onclick="if(this.value=='Username')this.value='';" onblur="if(this.value=='')this.value='Username';" />  
            			<label for="password"><img style="padding-bottom:3px;" src="http://img.movie2k.to/img/login/lock.gif" alt="Password"></label><input type="password" name="password" size=10 id="password" class="inputbox" title="Password" />
            			<input type="submit" name="login" value="Login" class="button2" />
            		</form>
    	    	</p>
    		</fieldset>
        </div>
        

        <div style="position:absolute; margin-top:59px; margin-left:30px; color:#FFF; font-family: Arial, Helvetica, sans-serif; font-size: 10px;">
            watch The Artist movie, cinema and tv shows and download The Artist for free.        </div>
        
        <div style="position:absolute; margin-top:65px; margin-left:950px;"><a href="index.php?lang=en"><img src="http://img.movie2k.to/img/us_flag.png" border="0" alt="Find free english cinema movies" title="find english cinema movies" /></a></div> 
        <div style="position:absolute; margin-top:90px; margin-left:950px;"><a href="index.php?lang=de"><img src="http://img.movie2k.to/img/ger_flag.png" border="0" alt="" title="Finde kostenlose deutsche Kinofilme" /></a></div>  
        <div style="position:absolute; margin-top:125px; margin-left:936px;"><a href="index.php?lang=fr"><img src="http://img.movie2k.to/img/french.png" border="0" alt="" title="Find free french cinema movies" /></a></div>  
        <div style="position:absolute; margin-top:125px; margin-left:963px;"><a href="index.php?lang=es"><img src="http://img.movie2k.to/img/spain.png" border="0" alt="" title="Find free spanish cinema movies" /></a></div>  
        <div style="position:absolute; margin-top:145px; margin-left:936px;"><a href="index.php?lang=it"><img src="http://img.movie2k.to/img/italia.png" border="0" alt="" title="Find free italian cinema movies" /></a></div>  
        <div style="position:absolute; margin-top:145px; margin-left:963px;"><a href="index.php?lang=jp"><img src="http://img.movie2k.to/img/japan.png" border="0" alt="" title="Find free japanese cinema movies" /></a></div>  
        <div style="position:absolute; margin-top:165px; margin-left:936px;"><a href="index.php?lang=tr"><img src="http://img.movie2k.to/img/turkey.png" border="0" alt="" title="Find free turkish cinema movies" /></a></div>  
        <div style="position:absolute; margin-top:165px; margin-left:963px;"><a href="index.php?lang=ru"><img src="http://img.movie2k.to/img/russia.png" border="0" alt="" title="Find free russia cinema movies" /></a></div>  

<table width="993" border="0" cellspacing="0" cellpadding="0">
  <tr>
    <td height="45"><table width="993" border="0" cellspacing="0" cellpadding="0">
      <tr>
        <td width="467"><a href="http://www.movie2k.to"><img src="http://img.movie2k.to/img/logo.png" border=0 width="206" height="39" alt="watch The Artist movie, cinema and tv shows and download The Artist for free." title="watch The Artist movie, cinema and tv shows and download The Artist for free." /></a></td>
        <td width="92" align="right" valign="middle"><img src="http://img.movie2k.to/img/news.png" width="15" height="15" align="top" alt="Movie and Cinema News" title="Movie and Cinema News" /> <span class="mainmenue"><a href="index.php">News</a></span></td>
        <td width="95" align="right"><img src="http://img.movie2k.to/img/forum.png" width="15" height="15" align="top" alt="User Registration on movie2k.to" title="User Registration on movie2k.to" /> <span class="mainmenue"><a href="register.php">Register</a></span></td>

        <td width="79" align="right"><img src="http://img.movie2k.to/img/faq.png" width="15" height="15" align="top" alt="Frequently Asked Questions" title="Frequently Asked Questions" /> <span class="mainmenue"><a href="faq.html">FAQ</a></span></td>
        <td width="102" align="right"><img src="http://img.movie2k.to/img/contact.png" width="15" height="15" align="top" alt="Contact" title="Contact" /> <span class="mainmenue"><a href="contact.html">Contact</a></span></td>
        <td width="158" align="right" class="mainmenue"><img src="http://img.movie2k.to/img/add.png" width="15" height="15" align="top" alt="Add a movie" title="Add a movie" /> <a href="ui.php?ua=movie">Add a movie</a></td>
      </tr>
    </table></td>
  </tr>

  <tr>

    <td style="padding-left:30px;" width="993" height="168" background="http://img.movie2k.to/img/movie2k_header_v4_1.jpg">
    <!--<td style="padding-left:30px;" width="993" height="168" background="http://img.movie2k.to/img/header-xmas_v2.jpg">-->
 
    <span style="font-size:10px; color: #FFF; font-family: Arial, Helvetica, sans-serif;">Search</span><br />
    
        <div class="days">

	<div id="menue">
		<div class="aussen">
            <a class="test123" href="index.php"><span class="menutag">Movies</span></a>
            <a class="innen-1" href="index.php">Cinema movies</a>
            <a class="innen" href="./movies-updates.html">Latest updates</a>
            <a class="innen" href="./movies-all.html">All movies</a>
            <a class="innen" href="./genres-movies.html">Genres</a>
            <a class="innen" href="./rss-movies.html">RSS feed</a>
            		</div>
            		<div class="aussen">
            <a class="test123" href="tvshows_featured.php"><span class="menutag">TV shows</span></a>
            <a class="innen-1" href="./tvshows_featured.php">Featured</a>
            <a class="innen" href="./tvshows-updates.html">Latest updates</a>
            <a class="innen" href="./tvshows-all.html">All TV shows</a>
            <a class="innen" href="./genres-tvshows.html">Genres</a>
            <a class="innen" href="./rss-tvshows.html">RSS feed</a>
            		</div>
            		<div class="aussen">
            <a class="test123" href="xxx-updates.html"><span class="menutag">XXX movies</span></a>
            <a class="innen-1" href="./xxx-updates.html">Latest updates</a>
            <a class="innen" href="./xxx-all.html">All movies</a>
            <a class="innen" href="./genres-xxx.html">Genres</a>
            <a class="innen" href="rss-xxx.html">RSS feed</a>
            
            		</div>
        	</div>
	</div><!-- menue -->



</div><!-- menuebox -->


    <FORM method=POST action="movies.php?list=search" style="display:inline; font-family: Arial, Helvetica, sans-serif; z-index:3;">

            <INPUT name="search" onKeyUp="showAutoComplete(this.value)" onBlur="window.setTimeout('closeAutoComplete()',300);" autocomplete="off"> <INPUT type=submit value="GO"> &nbsp;&nbsp;&nbsp;
            <!--<INPUT name="search"> <INPUT type=submit value="GO"> &nbsp;&nbsp;&nbsp;-->
            <div id="searchAutoComplete" style="display:none;position:absolute;left:30px;top:146px; z-index:3;"></div>
    </FORM>

</td>    </tr>

</table>


<div id="content">


    
   
<div id="menu" style="width: 229px; margin-top:7px;">

<table style="margin-left: 5px;" border="0" cellpadding="0" cellspacing="0" width="225px">
    
  <tr>
    <td valign="top" height="100%" colspan="2" style="padding-bottom:5px;"><font color="#000000" size="2px"><strong>Watch "The Artist" on:</strong></font></td>

  </tr>
<tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1164525.html">01/19/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/stream2k.gif" alt="Stream2k The Artist" title="Stream2k The Artist" width="16"> &nbsp;Stream2k</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1164525.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/4.gif" alt="Movie quality Screener Line dubbed" title="Movie quality Screener Line dubbed"></td></tr><SCRIPT type='text/javascript'>links = new Array();
chance = new Array();
allpoints = new Array();
links[1226065]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1226065.html\">02/27/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Filenuke The Artist\" title=\"Filenuke The Artist\" width=\"16\"> &nbsp;Filenuke</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1226065.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Dolby Digital/DVDRip\" title=\"Movie quality Screener Dolby Digital/DVDRip\"></td></tr>";
links[1226557]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1226557.html\">02/28/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Filenuke The Artist\" title=\"Filenuke The Artist\" width=\"16\"> &nbsp;Filenuke</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1226557.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Line dubbed\" title=\"Movie quality Screener Line dubbed\"></td></tr>";
var i=0;
var k=0;
for (i=1;i<=75;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=90;k=k+1) {
    chance[i][k]=1226065;
  }
  allpoints[i]=90;
}
for (i=76;i<=95;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=50;k=k+1) {
    chance[i][k]=1226557;
  }
  allpoints[i]=50;
}
var rand1=Math.floor(Math.random()*95)+1;
var rand2=Math.floor(Math.random()*allpoints[rand1])+1;
document.write(links[chance[rand1][rand2]]);
</SCRIPT><SCRIPT type='text/javascript'>links = new Array();
chance = new Array();
allpoints = new Array();
links[1168513]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1168513.html\">01/20/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Putlocker The Artist\" title=\"Putlocker The Artist\" width=\"16\"> &nbsp;Putlocker</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1168513.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Dolby Digital/DVDRip\" title=\"Movie quality Screener Dolby Digital/DVDRip\"></td></tr>";
links[1164320]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1164320.html\">01/19/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Putlocker The Artist\" title=\"Putlocker The Artist\" width=\"16\"> &nbsp;Putlocker</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1164320.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Line dubbed\" title=\"Movie quality Screener Line dubbed\"></td></tr>";
links[1166100]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1166100.html\">01/19/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Putlocker The Artist\" title=\"Putlocker The Artist\" width=\"16\"> &nbsp;Putlocker</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1166100.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Line dubbed\" title=\"Movie quality Screener Line dubbed\"></td></tr>";
links[1167386]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1167386.html\">01/20/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Putlocker The Artist\" title=\"Putlocker The Artist\" width=\"16\"> &nbsp;Putlocker</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1167386.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Line dubbed\" title=\"Movie quality Screener Line dubbed\"></td></tr>";
links[1227763]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1227763.html\">02/29/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Putlocker The Artist\" title=\"Putlocker The Artist\" width=\"16\"> &nbsp;Putlocker</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1227763.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Dolby Digital/DVDRip\" title=\"Movie quality Screener Dolby Digital/DVDRip\"></td></tr>";
var i=0;
var k=0;
for (i=1;i<=75;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=50;k=k+1) {
    chance[i][k]=1168513;
  }
  allpoints[i]=50;
}
for (i=76;i<=80;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=50;k=k+1) {
    chance[i][k]=1164320;
  }
  for (k=51;k<=110;k=k+1) {
    chance[i][k]=1166100;
  }
  for (k=111;k<=160;k=k+1) {
    chance[i][k]=1167386;
  }
  for (k=161;k<=230;k=k+1) {
    chance[i][k]=1227763;
  }
  allpoints[i]=230;
}
var rand1=Math.floor(Math.random()*80)+1;
var rand2=Math.floor(Math.random()*allpoints[rand1])+1;
document.write(links[chance[rand1][rand2]]);
</SCRIPT><SCRIPT type='text/javascript'>links = new Array();
chance = new Array();
allpoints = new Array();
links[1164321]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1164321.html\">01/19/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Sockshare The Artist\" title=\"Sockshare The Artist\" width=\"16\"> &nbsp;Sockshare</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1164321.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Line dubbed\" title=\"Movie quality Screener Line dubbed\"></td></tr>";
links[1164919]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1164919.html\">01/19/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Sockshare The Artist\" title=\"Sockshare The Artist\" width=\"16\"> &nbsp;Sockshare</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1164919.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Line dubbed\" title=\"Movie quality Screener Line dubbed\"></td></tr>";
var i=0;
var k=0;
for (i=1;i<=75;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=50;k=k+1) {
    chance[i][k]=1164321;
  }
  allpoints[i]=50;
}
for (i=76;i<=95;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=50;k=k+1) {
    chance[i][k]=1164919;
  }
  allpoints[i]=50;
}
var rand1=Math.floor(Math.random()*95)+1;
var rand2=Math.floor(Math.random()*allpoints[rand1])+1;
document.write(links[chance[rand1][rand2]]);
</SCRIPT><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1166454.html">01/20/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/divx.gif" alt="Xvidstage The Artist" title="Xvidstage The Artist" width="16"> &nbsp;Xvidstage</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1166454.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/4.gif" alt="Movie quality Screener Line dubbed" title="Movie quality Screener Line dubbed"></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1165077.html">01/19/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/flashPlayer2.gif" alt="Deditv The Artist" title="Deditv The Artist" width="16"> &nbsp;Deditv</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1165077.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/4.gif" alt="Movie quality Screener Dolby Digital/DVDRip" title="Movie quality Screener Dolby Digital/DVDRip"></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1226062.html">02/27/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/flashPlayer2.gif" alt="Hostingbulk The Artist" title="Hostingbulk The Artist" width="16"> &nbsp;Hostingbul</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1226062.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/4.gif" alt="Movie quality Screener Dolby Digital/DVDRip" title="Movie quality Screener Dolby Digital/DVDRip"></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1165076.html">01/19/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/flashPlayer2.gif" alt="Vidreel The Artist" title="Vidreel The Artist" width="16"> &nbsp;Vidreel</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1165076.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/4.gif" alt="Movie quality Screener Dolby Digital/DVDRip" title="Movie quality Screener Dolby Digital/DVDRip"></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1165078.html">01/19/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/flashPlayer2.gif" alt="Vidbox The Artist" title="Vidbox The Artist" width="16"> &nbsp;Vidbox</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1165078.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/4.gif" alt="Movie quality Screener Dolby Digital/DVDRip" title="Movie quality Screener Dolby Digital/DVDRip"></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1226063.html">02/27/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/divx.gif" alt="Vidbux The Artist" title="Vidbux The Artist" width="16"> &nbsp;Vidbux</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1226063.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/4.gif" alt="Movie quality Screener Dolby Digital/DVDRip" title="Movie quality Screener Dolby Digital/DVDRip"></td></tr><SCRIPT type='text/javascript'>links = new Array();
chance = new Array();
allpoints = new Array();
links[1164449]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1164449.html\">01/19/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Ufliq The Artist\" title=\"Ufliq The Artist\" width=\"16\"> &nbsp;Ufliq</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1164449.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Dolby Digital/DVDRip\" title=\"Movie quality Screener Dolby Digital/DVDRip\"></td></tr>";
links[1164302]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1164302.html\">01/19/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Ufliq The Artist\" title=\"Ufliq The Artist\" width=\"16\"> &nbsp;Ufliq</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1164302.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Line dubbed\" title=\"Movie quality Screener Line dubbed\"></td></tr>";
links[1226064]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\" style=\"background-color:#D0D0D0;\"><a href=\"The-Artist-watch-movie-1226064.html\">02/27/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Ufliq The Artist\" title=\"Ufliq The Artist\" width=\"16\"> &nbsp;Ufliq</a></td><td align=\"right\" width=\"58\" style=\"background-color:#D0D0D0;\"><a href=\"The-Artist-watch-movie-1226064.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Dolby Digital/DVDRip\" title=\"Movie quality Screener Dolby Digital/DVDRip\"></td></tr>";
var i=0;
var k=0;
for (i=1;i<=75;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=80;k=k+1) {
    chance[i][k]=1164449;
  }
  allpoints[i]=80;
}
for (i=76;i<=80;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=60;k=k+1) {
    chance[i][k]=1164302;
  }
  for (k=61;k<=150;k=k+1) {
    chance[i][k]=1226064;
  }
  allpoints[i]=150;
}
var rand1=Math.floor(Math.random()*80)+1;
var rand2=Math.floor(Math.random()*allpoints[rand1])+1;
document.write(links[chance[rand1][rand2]]);
</SCRIPT><SCRIPT type='text/javascript'>links = new Array();
chance = new Array();
allpoints = new Array();
links[1173902]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1173902.html\">01/25/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Vidxden The Artist\" title=\"Vidxden The Artist\" width=\"16\"> &nbsp;Vidxden</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1173902.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Line dubbed\" title=\"Movie quality Screener Line dubbed\"></td></tr>";
links[1226061]="<tr id=\"tablemoviesindex2\"><td height=\"20\" width=\"150\"><a href=\"The-Artist-watch-movie-1226061.html\">02/27/2012 <img border=0 style=\"vertical-align:top;\" src=\"http://img.movie2k.to/img/flashPlayer2.gif\" alt=\"Vidxden The Artist\" title=\"Vidxden The Artist\" width=\"16\"> &nbsp;Vidxden</a></td><td align=\"right\" width=\"58\"><a href=\"The-Artist-watch-movie-1226061.html\">Quality:</a> <img style=\"vertical-align: top;\" src=\"http://img.movie2k.to/img/smileys/4.gif\" alt=\"Movie quality Screener Dolby Digital/DVDRip\" title=\"Movie quality Screener Dolby Digital/DVDRip\"></td></tr>";
var i=0;
var k=0;
for (i=1;i<=75;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=100;k=k+1) {
    chance[i][k]=1173902;
  }
  allpoints[i]=100;
}
for (i=76;i<=80;i=i+1) {
  chance[i] = new Array;
  for (k=1;k<=90;k=k+1) {
    chance[i][k]=1226061;
  }
  allpoints[i]=90;
}
var rand1=Math.floor(Math.random()*80)+1;
var rand2=Math.floor(Math.random()*allpoints[rand1])+1;
document.write(links[chance[rand1][rand2]]);
</SCRIPT><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1210774.html">02/13/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/divx.gif" alt="Filebox The Artist" title="Filebox The Artist" width="16"> &nbsp;Filebox</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1210774.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/4.gif" alt="Movie quality Screener Line dubbed" title="Movie quality Screener Line dubbed"></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1194850.html">01/30/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/flashPlayer2.gif" alt="Modovideo The Artist" title="Modovideo The Artist" width="16"> &nbsp;Modovideo</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1194850.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/3.gif" alt="Movie quality DVDRip/BDRip " title="Movie quality DVDRip/BDRip "></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1168049.html">01/20/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/flashPlayer2.gif" alt="Putlocker The Artist" title="Putlocker The Artist" width="16"> &nbsp;Putlocker</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1168049.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/0.gif" alt="Movie quality  " title="Movie quality  "></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1168050.html">01/20/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/flashPlayer2.gif" alt="Sockshare The Artist" title="Sockshare The Artist" width="16"> &nbsp;Sockshare</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1168050.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/0.gif" alt="Movie quality  " title="Movie quality  "></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1172924.html">01/22/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/flashPlayer2.gif" alt="Altervideo The Artist" title="Altervideo The Artist" width="16"> &nbsp;Altervideo</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1172924.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/0.gif" alt="Movie quality  " title="Movie quality  "></td></tr><tr id="tablemoviesindex2"><td height="20" width="150"><a href="The-Artist-watch-movie-1210480.html">02/13/2012 <img border=0 style="vertical-align:top;" src="http://img.movie2k.to/img/flashPlayer2.gif" alt="Ginbig The Artist" title="Ginbig The Artist" width="16"> &nbsp;Ginbig</a></td><td align="right" width="58"><a href="The-Artist-watch-movie-1210480.html">Quality:</a> <img style="vertical-align: top;" src="http://img.movie2k.to/img/smileys/0.gif" alt="Movie quality  " title="Movie quality  "></td></tr>
</table>


<div id="xline2"></div>


<br>
</div>

<div id="tdmoviesheader"><span style="padding-left: 2px; font-weight: bold;">Mirrors</span><H1 style="padding-left: 191px; font-weight: bold;display:inline;font-size:14px;">Watch movie</H1></div>

<div id="maincontent5">

<div style="width:742px">


    <div id="ball" style="z-index:99999; position:fixed; width:254px; height:109px; left:100%; top:100%; margin-top:-119px; margin-left:-264px; font-weight:normal; text-decoration:none;">
    <table width="254" height="109" cellpadding="8px">
    
    <tr><td valign="top" background="http://img.movie2k.to/img/ballon.gif">
        <table><tr><td style="padding:5px;">
        <div style="float:right;"><a onClick='document.getElementById("ball").style.display = "none";return false;' href="#"><img border="0" src="http://img.movie2k.to/img/weg.gif"></a></div>
        <!--<a target="_blank" style="text-decoration:none;" href="http://secure.signupsecurity.com/track/redirect.asp?aff=10846&siteid=themoviedling_2&camp=ballon"><span style="font-weight:normal; font-size: 10px; font-family:verdana; color:#000000;">-->
        <a target="_blank" style="text-decoration:none;" href="movie-5890324806-Download-film.html"><span style="font-weight:normal; font-size: 10px; font-family:verdana; color:#000000;">
        <img border="0" src="http://img.movie2k.to/img/icon_info.gif"> <b>Attention!</b>
        <!--<br /><br />Please download the movie here, if you prefer to watch the movie in good quality!</span><span style="font-size: 10px; font-family:verdana; color:#0000ff;">
        <b><u>Click here.</u></b></span>-->
        <br /><br />
                Click here for direct download
                </span><span style="font-size: 10px; font-family:verdana; color:#0000ff;">
        <b><u>The-Artist.avi</u></b></span>
        </td></tr></table>
    </td></tr></table>
    </div>



    
<script>
$(document).ready(function() {  
		$('#voting').load('starvote.php?id=1226064','',showNewContent);
    function showNewContent() {  
        $('#content').show('normal',hideLoader());  
    }  
    function hideLoader() {  
        $('#load').fadeOut('normal');  
    }  
    return false;  
});  
</script>


    <div style="float:left">
    	<a href="http://www.movie2k.to/The-Artist-watch-movie-1226064.html"><img src="http://img.movie2k.to/thumbs/cover-1226063-The-Artist-movie2k-film.jpg" border=0 style="width:105px;max-width:105px;max-height:160px;min-height:140px;" alt="The Artist" title="The Artist"></a> &nbsp;    	<BR>
    </div>
<div style="min-height:170px;">
<span style="font-size:18px;">
    <H1 style="font-size:18px;display:inline;">
        <a href="http://www.movie2k.to/The-Artist-watch-movie-1226064.html" style="color:#000000;">
            The Artist        </a>
    </H1>
    &nbsp;<img src="http://img.movie2k.to/img/us_flag_small.png" width=24 height=14 border=0>&nbsp;&nbsp;
            <span style="font-size:14px;vertical-align:top;">Quality: <img src="http://img.movie2k.to/img/smileys/4.gif" alt="Movie quality Screener Dolby Digital/DVDRip" title="Movie quality Screener Dolby Digital/DVDRip" style="vertical-align:top;"> &nbsp; </span>
            </span>
<div class="moviedescription">
    George Valentin ist ein grosser Star des Stummfilms, doch mit dem Beginn des Tonfilms ist sein Stern im Sinken begriffen. Daf&uuml;r erlebt die junge Peppy Miller einen berauschenden Karriereschub. Das sind nicht die idealen Voraussetzungen f&uuml;r eine harmonische Liebesbeziehung zwischen den beiden.</div>

<BR>
<a href="http://www.movie2k.to/movie-5890324798-Download-Movie-film.html" style="color:#0000ff;font-size:14px;" target="_blank"><STRONG>Download “The Artist” in HD quality!</STRONG></a><BR><BR>
</div>

    <span><img src="http://img.movie2k.to/img/question.png"> <a href="#" onClick="javascript:$('#help1').slideToggle('normal');return false;" style="font-weight:bolder;">The movie does not play properly? Click here please!</a></span>
    <BR>
    <div style="display:none" id="help1">
        <BR>
                    <img src="http://img.movie2k.to/img/flashPlayer2.gif" width="15" height="15" border="0" /> The movie does not play properly?<BR>
            You need the Flash Web-Player to watch Flash movies! <a href="http://get.adobe.com/flashplayer/" target="_blank">Click here to download it for free!</a>
            <BR>
                    <img src="http://img.movie2k.to/img/divx.gif" width="15" height="15" border="0" /> 
        <img src="http://img.movie2k.to/img/flashPlayer2.gif" width="15" height="15" border="0" /> 
        The movie stream is too slow?<BR>
        Check the mirror links on the left menu. Here you see hoster listed, which might be faster!        <BR>
    </div>
    <BR>    

	<IFRAME SRC="http://www.ufliq.com/embed-87jrzf4p2a1r.html" FRAMEBORDER=0 MARGINWIDTH=0 MARGINHEIGHT=0 SCROLLING=NO WIDTH=970 HEIGHT=563></IFRAME><BR>			<div id="underplayer">
        	</div>
	<div id="details">
        <div style="height:5px;">&nbsp;</div>
        	    IMDB Rating: <a href="http://www.pnop.com/The-Artist_tt,569822" target="_blank">8.40</a>&nbsp;|	    	    <a href="http://www.movie2k.to/offline.php?id=1226064" onClick="return confirm('REPORT AS OFFLINE?');" rel="nofollow"><u style="font-size:12px; vertical-align:top;" >REPORT AS OFFLINE</u></a>         
            	    <SCRIPT>
    	        function gotoHosterlistLink2() {
    	            location.href=(document.hosterlistdropdown.hosterlist[document.hosterlistdropdown.hosterlist.selectedIndex].value);
    	            return TRUE;
    	        }
    	    </SCRIPT>
    	        <FORM name="hosterlistdropdown" style="display:inline;">
    	        | <SELECT name="hosterlist" style="width: 200px; height: 15px; font-size: 11px; vertical-align:top;" onChange="gotoHosterlistLink2();">
    	            <OPTION value="The-Artist-watch-movie-1164449.html" style="Background: URL('http://img.movie2k.to/img/flashPlayer2.gif') no-repeat 3px center transparent; Text-Indent: 25px">Ufliq (1/3)</OPTION><OPTION value="The-Artist-watch-movie-1164302.html" style="Background: URL('http://img.movie2k.to/img/flashPlayer2.gif') no-repeat 3px center transparent; Text-Indent: 25px">Ufliq (2/3)</OPTION><OPTION value="The-Artist-watch-movie-1226064.html" selected style="Background: URL('http://img.movie2k.to/img/flashPlayer2.gif') no-repeat 3px center transparent; Text-Indent: 25px">Ufliq (3/3)</OPTION>    	        </SELECT>
    	        </FORM>
    	    	    <BR>
	    Genre: 
	    	        <a href="http://www.movie2k.to/movies-genre-2-Drama.html">Drama</a>
	     , 	        <a href="http://www.movie2k.to/movies-genre-3-Comedy.html">Comedy</a>
	     , 	        <a href="http://www.movie2k.to/movies-genre-20-Romance.html">Romance</a>
	    &nbsp;|
	    Length: 100 minutes&nbsp;|
	    Land/Year: France, Belgium/2011<BR></span>
	    	        Regie: <a href="movies-regie-Michel+Hazanavicius.html">Michel Hazanavicius</a> &nbsp;|&nbsp; 
	            Actors: 
        <a href="movies-cast-Jean+Dujardin.html">Jean Dujardin</a>, <a href="movies-cast-B%26%23xE9%3Br%26%23xE9%3Bnice+Bejo.html">B&#xE9;r&#xE9;nice Bejo</a>, <a href="movies-cast-John+Goodman.html">John Goodman</a>, <a href="movies-cast-James+Cromwell.html">James Cromwell</a>, <a href="movies-cast-Penelope+Ann+Miller.html">Penelope Ann Miller</a>, <a href="movies-cast-Missi+Pyle.html">Missi Pyle</a>        <BR>
	    	    <B style="font-weight:bolder;">
	    	    </B>
	    	    
	            
        <iframe src="http://www.facebook.com/plugins/like.php?locale=en_US&href=http%3A%2F%2Fwww.movie2k.to%2Fwatch-The-Artist-online.html&amp;layout=standard&amp;show_faces=false&amp;width=700&amp;action=like&amp;font&amp;colorscheme=light&amp;height=35" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:700px; height:35px;" allowTransparency="true"></iframe>
        	</div>
    <br>
    
        <div class="SM_width SM_center" id="SIMILARMOVIES">
        	<div class="SM_similarmoviesOUTER">
            	Recommended movies
        		<div class="SM_similarmovies">    
                
                    	<div class="SM_schatten SM_fleft">
                        	<div class="SM_pic">
                        	    <a href="The-Clink-of-Ice-subtitled-watch-movie-848797.html">
                            	    <img src="http://img.movie2k.to/thumbs/cover-847726-The-Clink-of-Ice-subtitled-movie2k-film.jpg" alt="The Clink of Ice *subtitled*" title="The Clink of Ice *subtitled*" border=0 style="width:79px;max-width:79px;max-height:111px;min-height:111px;" />                    
                            	</a><!-- 3 -->
                            </div>
                            <div class="SM_pictitle"><a href="The-Clink-of-Ice-subtitled-watch-movie-848797.html">The Clink Of Ice *subtitled*</a></div>
                        </div>
                        
                    	<div class="SM_schatten SM_fleft">
                        	<div class="SM_pic">
                        	    <a href="Love-in-the-Afternoon-watch-movie-706223.html">
                            	    <img src="http://img.movie2k.to/thumbs/cover-706223-Love-in-the-Afternoon-movie2k-film.jpg" alt="Love in the Afternoon" title="Love in the Afternoon" border=0 style="width:79px;max-width:79px;max-height:111px;min-height:111px;" />                    
                            	</a><!-- 7 -->
                            </div>
                            <div class="SM_pictitle"><a href="Love-in-the-Afternoon-watch-movie-706223.html">Love In The Afternoon</a></div>
                        </div>
                        
                    	<div class="SM_schatten SM_fleft">
                        	<div class="SM_pic">
                        	    <a href="Moonstruck-watch-movie-887088.html">
                            	    <img src="http://img.movie2k.to/thumbs/cover-882979-Moonstruck-movie2k-film.jpg" alt="Moonstruck" title="Moonstruck" border=0 style="width:79px;max-width:79px;max-height:111px;min-height:111px;" />                    
                            	</a><!-- 7 -->
                            </div>
                            <div class="SM_pictitle"><a href="Moonstruck-watch-movie-887088.html">Moonstruck</a></div>
                        </div>
                        
                    	<div class="SM_schatten SM_fleft">
                        	<div class="SM_pic">
                        	    <a href="Sleepless-in-Seattle-watch-movie-602341.html">
                            	    <img src="http://img.movie2k.to/thumbs/cover-482348-Sleepless-in-Seattle-movie2k-film.jpg" alt="Sleepless in Seattle" title="Sleepless in Seattle" border=0 style="width:79px;max-width:79px;max-height:111px;min-height:111px;" />                    
                            	</a><!-- 7 -->
                            </div>
                            <div class="SM_pictitle"><a href="Sleepless-in-Seattle-watch-movie-602341.html">Sleepless In Seattle</a></div>
                        </div>
                        
                    	<div class="SM_schatten SM_fleft">
                        	<div class="SM_pic">
                        	    <a href="Working-Girl-watch-movie-868240.html">
                            	    <img src="http://img.movie2k.to/thumbs/cover-420755-Working-Girl-movie2k-film.jpg" alt="Working Girl" title="Working Girl" border=0 style="width:79px;max-width:79px;max-height:111px;min-height:111px;" />                    
                            	</a><!-- 7 -->
                            </div>
                            <div class="SM_pictitle"><a href="Working-Girl-watch-movie-868240.html">Working Girl</a></div>
                        </div>
                        
                    <div class="SM_clear"></div>
                
                </div>
            </div>
        </div>
        <BR>
    
    <a href="http://www.movie2k.to/ab/" target="_blank"><img src="http://img.movie2k.to/img/banners/v6.gif" alt="watch free movies online" title="watch free movies online" width="728" height="90" border=0 /></a><img style="border:0" src="http://affiliate-robot.com/scripts/imp.php?a_aid=4e27194b02bce&amp;a_bid=3a29e752" width="1" height="1" alt="" />    
    <!--cached movie.php 03/02/12 10:58:26 900-->


<script type="text/javascript" src="http://www.wigetmedia.com/tags/movie2k.js"></script>
    <div id="comments" name="comments">
        
    <div class="comments" style="padding-top:5px;">
        <a class="sitelinksblue" href="Addcomment" onClick="$('#commentfield').load('comments.php?commentid=&addform=1&id=1226064','',showNewContent);return false;" style="font-family: Verdana, Geneva, sans-serif;font-size:12px;font-weight:bolder;">+ Add a comment for The Artist</a><br>
        <div id="commentfield">

        </div>
        <BR>
                    <table width="746px" id="commentshow_772688" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">Eisenrabe                    <br />
                                        <br />
                    <font size=1>02/01/2012</br>
                    21:10</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/243391.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Scheiße ist der Film gut, insgesammt erst mein 2. od. 3. Stummfilm den ich sehe und trotzdem vermisse ich die Spache hier kein bisschen. Gestik und Mimik sind bei den beiden Haupdarstellern auf den Punkt nahezu perfekt und mann weiß immer was gerade vor sich geht. Ich hoffe sehr dass die academy das zu würdigen weiß und den ein oder anderen Oscar dafür ausspuckt.
Der Film ist auch ein guter Einstieg für Leute die noch nie einen Stummfilm gesehen haben.
10/10 für den Film, Bild ist Super, Ton vernachlässigbar aber auch super.                        <div id="commentformreply772688">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_772688" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                +2                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_772688').load('comments.php?commentid=772688&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_772688').load('comments.php?commentid=772688&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_772688').style.display='none';document.getElementById('commentdontshow_772688').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply772688').load('comments.php?commentid=772688&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_772688" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">Eisenrabe <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_772688').style.display='inline';document.getElementById('commentdontshow_772688').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_772688">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            +2                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_778918" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">TinyaWazzo <br /><br />
                        <font size=1>03/02/2012</br>
                        03:24</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/264489.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            Ganz Deiner Meinung!!                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_778918" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    +1                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_778918').load('comments.php?commentid=778918&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_778918').load('comments.php?commentid=778918&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_778918').style.display='none';document.getElementById('commentdontshow2_778918').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_778918" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">TinyaWazzo<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_778918').style.display='inline';document.getElementById('commentdontshow2_778918').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_778918">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                +1                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                        <table width="746px" id="commentshow_775056" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">curtis333c                    <br />
                                        <br />
                    <font size=1>02/12/2012</br>
                    22:43</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/366285.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        you have to be over sixty to even find this movie the lease bit of entertaining. The movie was stupid and boring the 15 minutes I watch it. 1927 what the fu*k, I wasnt born until 70s was a teenager in the 90s. I cant relate to this CRAP                        <div id="commentformreply775056">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_775056" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                -2                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_775056').load('comments.php?commentid=775056&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_775056').load('comments.php?commentid=775056&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_775056').style.display='none';document.getElementById('commentdontshow_775056').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply775056').load('comments.php?commentid=775056&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_775056" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">curtis333c <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_775056').style.display='inline';document.getElementById('commentdontshow_775056').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_775056">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            -2                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_778899" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">PIXAPD <br /><br />
                        <font size=1>03/02/2012</br>
                        01:19</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/323103.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            YOU are stupid and boring, and would have been in 1927 also.                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_778899" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    +1                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_778899').load('comments.php?commentid=778899&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_778899').load('comments.php?commentid=778899&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_778899').style.display='none';document.getElementById('commentdontshow2_778899').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_778899" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">PIXAPD<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_778899').style.display='inline';document.getElementById('commentdontshow2_778899').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_778899">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                +1                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                        <table width="746px" id="commentshow_778798" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">TinyaWazzo                    <br />
                                        <br />
                    <font size=1>03/01/2012</br>
                    08:38</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/264489.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        I loved it! First 20 minutes I thought the movie was overrated but shortly after I was completely taken by its charm. What an awesome idea to make a silent movie again after all this time , where one can totally focus on the great acting, heartwarming story and the charming music. Thanx for uploading, very good quality!                        <div id="commentformreply778798">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_778798" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                +2                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_778798').load('comments.php?commentid=778798&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_778798').load('comments.php?commentid=778798&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_778798').style.display='none';document.getElementById('commentdontshow_778798').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply778798').load('comments.php?commentid=778798&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_778798" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">TinyaWazzo <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_778798').style.display='inline';document.getElementById('commentdontshow_778798').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_778798">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            +2                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <BR>
                <span style="margin-top:5px;">
                <a href="http://www.movie2k.to/ab/" target="_blank"><img src="http://img.movie2k.to/img/banners/v6.gif" alt="watch free movies online" title="watch free movies online" width="728" height="90" border=0 /></a><img style="border:0" src="http://affiliate-robot.com/scripts/imp.php?a_aid=4e27194b02bce&amp;a_bid=3a29e752" width="1" height="1" alt="" />                </span>
                            <table width="746px" id="commentshow_770750" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">DAWANDA                    <br />
                                        <br />
                    <font size=1>01/24/2012</br>
                    07:06</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/302969.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        I ownlee cee ten minits uv this moovee. I ternd it awf cuz itz dum. I lixe mooveez dat makx yew theenc lyk Black swon! Black swon wuz good moovee cuz it wuz intelleegenz. Yew got to be intelleegenz to unnerstan Black swon bcuz yew got to no natolee porman iz jus a wyt swon at ferst but shee wonz to be black swon but she izunt till de endeen. Then at endeen she iz the Black swon and nawt wyt swon noz mor. It mayks yew theenc! But Lawts uv peepel just dum and downt get Black swon cuz thay dum shit. Thiz moovee iz boreeng. If yew lyk it yewz dum ass.                         <div id="commentformreply770750">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_770750" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_770750').load('comments.php?commentid=770750&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_770750').load('comments.php?commentid=770750&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_770750').style.display='none';document.getElementById('commentdontshow_770750').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply770750').load('comments.php?commentid=770750&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_770750" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">DAWANDA <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_770750').style.display='inline';document.getElementById('commentdontshow_770750').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_770750">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_772124" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">abhi89 <br /><br />
                        <font size=1>01/30/2012</br>
                        11:00</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/314737.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            Hahaha...this review made me laugh till my head hurt...haha                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_772124" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    +2                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_772124').load('comments.php?commentid=772124&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_772124').load('comments.php?commentid=772124&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_772124').style.display='none';document.getElementById('commentdontshow2_772124').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_772124" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">abhi89<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_772124').style.display='inline';document.getElementById('commentdontshow2_772124').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_772124">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                +2                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_775620" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">Indypop <br /><br />
                        <font size=1>02/15/2012</br>
                        15:18</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/294093.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            DAWANDA you are either as a complete Vicky Pollard type chav or a Comedic Genius...                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_775620" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    -1                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_775620').load('comments.php?commentid=775620&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_775620').load('comments.php?commentid=775620&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_775620').style.display='none';document.getElementById('commentdontshow2_775620').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_775620" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">Indypop<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_775620').style.display='inline';document.getElementById('commentdontshow2_775620').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_775620">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                -1                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_777578" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">banga <br /><br />
                        <font size=1>02/23/2012</br>
                        23:10</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/392864.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            When I started reading your comment I thought it was in French, then I thought German, only after that I realized you are just trying really hard to sound street black. If you are black person from the streets you cant afford neither a computer nor high speed connection to stream all these movies.                         
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_777578" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    -1                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_777578').load('comments.php?commentid=777578&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_777578').load('comments.php?commentid=777578&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_777578').style.display='none';document.getElementById('commentdontshow2_777578').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_777578" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">banga<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_777578').style.display='inline';document.getElementById('commentdontshow2_777578').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_777578">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                -1                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_778199" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">devingelic <br /><br />
                        <font size=1>02/27/2012</br>
                        19:36</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/210587.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            jebem ti mamu retardiranu, kad ovako crnacko sranje pises, krepaj stoko neuka! ( translate: this was really funny just bizzare way of speech for me )
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_778199" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    +2                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_778199').load('comments.php?commentid=778199&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_778199').load('comments.php?commentid=778199&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_778199').style.display='none';document.getElementById('commentdontshow2_778199').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_778199" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">devingelic<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_778199').style.display='inline';document.getElementById('commentdontshow2_778199').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_778199">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                +2                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                        <table width="746px" id="commentshow_775661" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">freefree                    <br />
                                        <br />
                    <font size=1>02/15/2012</br>
                    19:26</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/375615.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Making a silent film in 2012 wow? that said, This movie needs to win EVERY SINGLE AWARD its being nominated for this year it is brilliant. to take on such a project and do such a good job had to have been a great deal of work thus a labor of love. oh man i love this movie you guys have no idea!                        <div id="commentformreply775661">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_775661" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_775661').load('comments.php?commentid=775661&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_775661').load('comments.php?commentid=775661&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_775661').style.display='none';document.getElementById('commentdontshow_775661').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply775661').load('comments.php?commentid=775661&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_775661" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">freefree <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_775661').style.display='inline';document.getElementById('commentdontshow_775661').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_775661">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_774773" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">LAJW2                    <br />
                                        <br />
                    <font size=1>02/11/2012</br>
                    17:22</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/367920.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        ONE OF THE GREAST MOVIES THAT IVE SEEN IN A VERY VERY LONG TIME, I SPEAKS VOLUMES ON SO MANY LEVELS, FROM DIRECTION TO ACTING TO SET AND CONCEPT, JUST LOVED IT                        <div id="commentformreply774773">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_774773" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                -1                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_774773').load('comments.php?commentid=774773&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_774773').load('comments.php?commentid=774773&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_774773').style.display='none';document.getElementById('commentdontshow_774773').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply774773').load('comments.php?commentid=774773&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_774773" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">LAJW2 <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_774773').style.display='inline';document.getElementById('commentdontshow_774773').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_774773">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            -1                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_772447" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">PK2                    <br />
                                        <br />
                    <font size=1>01/31/2012</br>
                    21:55</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/345860.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Excellent movie!!! recommended for people with high movie taste only....                        <div id="commentformreply772447">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_772447" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                +3                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_772447').load('comments.php?commentid=772447&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_772447').load('comments.php?commentid=772447&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_772447').style.display='none';document.getElementById('commentdontshow_772447').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply772447').load('comments.php?commentid=772447&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_772447" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">PK2 <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_772447').style.display='inline';document.getElementById('commentdontshow_772447').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_772447">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            +3                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_773035" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">spikey91 <br /><br />
                        <font size=1>02/03/2012</br>
                        15:00</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/343461.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            good comment                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_773035" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_773035').load('comments.php?commentid=773035&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_773035').load('comments.php?commentid=773035&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_773035').style.display='none';document.getElementById('commentdontshow2_773035').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_773035" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">spikey91<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_773035').style.display='inline';document.getElementById('commentdontshow2_773035').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_773035">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_774273" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">fransen <br /><br />
                        <font size=1>02/09/2012</br>
                        10:53</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/210665.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            brilliant movie!                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_774273" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_774273').load('comments.php?commentid=774273&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_774273').load('comments.php?commentid=774273&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_774273').style.display='none';document.getElementById('commentdontshow2_774273').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_774273" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">fransen<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_774273').style.display='inline';document.getElementById('commentdontshow2_774273').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_774273">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                        <table width="746px" id="commentshow_773399" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">spaz22                    <br />
                                        <br />
                    <font size=1>02/05/2012</br>
                    06:56</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/321050.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Best movie of the year....                        <div id="commentformreply773399">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_773399" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_773399').load('comments.php?commentid=773399&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_773399').load('comments.php?commentid=773399&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_773399').style.display='none';document.getElementById('commentdontshow_773399').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply773399').load('comments.php?commentid=773399&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_773399" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">spaz22 <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_773399').style.display='inline';document.getElementById('commentdontshow_773399').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_773399">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_773036" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">spikey91                    <br />
                                        <br />
                    <font size=1>02/03/2012</br>
                    15:01</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/343461.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        good film 6/10                        <div id="commentformreply773036">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_773036" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_773036').load('comments.php?commentid=773036&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_773036').load('comments.php?commentid=773036&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_773036').style.display='none';document.getElementById('commentdontshow_773036').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply773036').load('comments.php?commentid=773036&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_773036" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">spikey91 <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_773036').style.display='inline';document.getElementById('commentdontshow_773036').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_773036">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_771909" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">weener                    <br />
                                        <br />
                    <font size=1>01/29/2012</br>
                    14:59</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/210800.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        oozing culture, mildly entertained. could have used some t                        <div id="commentformreply771909">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_771909" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_771909').load('comments.php?commentid=771909&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_771909').load('comments.php?commentid=771909&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_771909').style.display='none';document.getElementById('commentdontshow_771909').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply771909').load('comments.php?commentid=771909&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_771909" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">weener <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_771909').style.display='inline';document.getElementById('commentdontshow_771909').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_771909">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_771910" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">weener <br /><br />
                        <font size=1>01/29/2012</br>
                        15:01</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/210800.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            and a                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_771910" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_771910').load('comments.php?commentid=771910&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_771910').load('comments.php?commentid=771910&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_771910').style.display='none';document.getElementById('commentdontshow2_771910').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_771910" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">weener<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_771910').style.display='inline';document.getElementById('commentdontshow2_771910').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_771910">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                        <table width="746px" id="commentshow_771907" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">weener                    <br />
                                        <br />
                    <font size=1>01/29/2012</br>
                    14:57</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/210800.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        give the jack russell an oscar                        <div id="commentformreply771907">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_771907" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_771907').load('comments.php?commentid=771907&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_771907').load('comments.php?commentid=771907&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_771907').style.display='none';document.getElementById('commentdontshow_771907').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply771907').load('comments.php?commentid=771907&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_771907" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">weener <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_771907').style.display='inline';document.getElementById('commentdontshow_771907').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_771907">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_769845" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">Doogie                    <br />
                                        <br />
                    <font size=1>01/20/2012</br>
                    09:42</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/321496.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        I Know im gonna get hate for this, but come on, how and why have I heard so many people saying this is an original piece of film making? People who say it is and how its a masterpiece are people who think they know movies and who are pretentious! 
Hate away, but remember theres a reason for the comment section, so people can share their opinions.                        <div id="commentformreply769845">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_769845" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_769845').load('comments.php?commentid=769845&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_769845').load('comments.php?commentid=769845&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_769845').style.display='none';document.getElementById('commentdontshow_769845').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply769845').load('comments.php?commentid=769845&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_769845" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">Doogie <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_769845').style.display='inline';document.getElementById('commentdontshow_769845').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_769845">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_769866" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">ColdSnow <br /><br />
                        <font size=1>01/20/2012</br>
                        12:19</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/209200.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            "so many people"? Its been only one till now. And for the current generation it s original. Its not like they see or hear of cinematography everyday.                         
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_769866" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_769866').load('comments.php?commentid=769866&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_769866').load('comments.php?commentid=769866&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_769866').style.display='none';document.getElementById('commentdontshow2_769866').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_769866" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">ColdSnow<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_769866').style.display='inline';document.getElementById('commentdontshow2_769866').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_769866">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_769867" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">Doogie <br /><br />
                        <font size=1>01/20/2012</br>
                        12:35</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/321496.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            1 on this site yes, but on other sites, critcs, and friends have said to me.                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_769867" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_769867').load('comments.php?commentid=769867&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_769867').load('comments.php?commentid=769867&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_769867').style.display='none';document.getElementById('commentdontshow2_769867').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_769867" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">Doogie<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_769867').style.display='inline';document.getElementById('commentdontshow2_769867').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_769867">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_770124" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">guadano <br /><br />
                        <font size=1>01/21/2012</br>
                        16:54</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/324656.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            Yeah I know what u mean,it only uses the old way of filming and acting, but even the actors of this movie admit that!! and ColdSnow is right too, it can be new for young generation, or just people who werent interested in classics. But Doogie, we only say its a good movie, not that its better than the old ones... Kiss                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_770124" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_770124').load('comments.php?commentid=770124&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_770124').load('comments.php?commentid=770124&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_770124').style.display='none';document.getElementById('commentdontshow2_770124').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_770124" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">guadano<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_770124').style.display='inline';document.getElementById('commentdontshow2_770124').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_770124">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_770125" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">guadano <br /><br />
                        <font size=1>01/21/2012</br>
                        16:56</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/324656.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            I meant : bye (sorry im french)                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_770125" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_770125').load('comments.php?commentid=770125&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_770125').load('comments.php?commentid=770125&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_770125').style.display='none';document.getElementById('commentdontshow2_770125').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_770125" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">guadano<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_770125').style.display='inline';document.getElementById('commentdontshow2_770125').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_770125">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_770801" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">Doogie <br /><br />
                        <font size=1>01/24/2012</br>
                        11:49</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/321496.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            Hhaha, was wondering for a second. But its as you said, its not that im not open to the being being a younger generation (im 18, i love films of practically all genres) i just dont like how this is being so hyped, and how it will clear up the oscars because its an oldway of making film and that reason only                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_770801" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_770801').load('comments.php?commentid=770801&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_770801').load('comments.php?commentid=770801&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_770801').style.display='none';document.getElementById('commentdontshow2_770801').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_770801" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">Doogie<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_770801').style.display='inline';document.getElementById('commentdontshow2_770801').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_770801">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_771014" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">ColdSnow <br /><br />
                        <font size=1>01/25/2012</br>
                        15:16</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/209200.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            it might win so many Oscars, but not because it was great. The other movies been just sh.it lately. There are handful i consider to be worth mentioned.                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_771014" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_771014').load('comments.php?commentid=771014&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_771014').load('comments.php?commentid=771014&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_771014').style.display='none';document.getElementById('commentdontshow2_771014').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_771014" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">ColdSnow<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_771014').style.display='inline';document.getElementById('commentdontshow2_771014').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_771014">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_771245" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">guadano <br /><br />
                        <font size=1>01/26/2012</br>
                        15:20</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/324656.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            oops i clicled on the " " but i dont really like your comment, it was to add one... :-)anyway... Yeah maybe youre right, it would have get less nominations with other hum... contestant(?)(is that how you say?), and i agree, there is a little too much craze over it...but maybe its a way to say "make new from old...sometimes "simple" is enough...                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_771245" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_771245').load('comments.php?commentid=771245&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_771245').load('comments.php?commentid=771245&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_771245').style.display='none';document.getElementById('commentdontshow2_771245').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_771245" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">guadano<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_771245').style.display='inline';document.getElementById('commentdontshow2_771245').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_771245">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_771390" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">TheFluffer <br /><br />
                        <font size=1>01/27/2012</br>
                        05:11</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/179762.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            Doogie I know you said you enjoyed the film but can I ask you what an 18 year old these days considers to be a Great movie... something worthy of the Oscar?                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_771390" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_771390').load('comments.php?commentid=771390&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_771390').load('comments.php?commentid=771390&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_771390').style.display='none';document.getElementById('commentdontshow2_771390').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_771390" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">TheFluffer<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_771390').style.display='inline';document.getElementById('commentdontshow2_771390').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_771390">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_771579" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">DAWANDA <br /><br />
                        <font size=1>01/28/2012</br>
                        06:41</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/302969.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            yo but smell                         
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_771579" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_771579').load('comments.php?commentid=771579&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_771579').load('comments.php?commentid=771579&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_771579').style.display='none';document.getElementById('commentdontshow2_771579').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_771579" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">DAWANDA<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_771579').style.display='inline';document.getElementById('commentdontshow2_771579').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_771579">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                        <table width="746px" id="commentshow_771068" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">noonehere                    <br />
                                        <br />
                    <font size=1>01/25/2012</br>
                    20:31</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/332066.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Really sweet movie, worth a watch, I love how theyve used little known actors for the main roles, you will enjoy, take the risk of watching something completely
 different...                        <div id="commentformreply771068">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_771068" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                +1                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_771068').load('comments.php?commentid=771068&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_771068').load('comments.php?commentid=771068&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_771068').style.display='none';document.getElementById('commentdontshow_771068').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply771068').load('comments.php?commentid=771068&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_771068" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">noonehere <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_771068').style.display='inline';document.getElementById('commentdontshow_771068').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_771068">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            +1                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_771238" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">guadano <br /><br />
                        <font size=1>01/26/2012</br>
                        14:59</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/324656.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            "little known"...nice. I can assure you they are not little known in France and some of the french-speaking countries...                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_771238" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_771238').load('comments.php?commentid=771238&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_771238').load('comments.php?commentid=771238&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_771238').style.display='none';document.getElementById('commentdontshow2_771238').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_771238" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">guadano<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_771238').style.display='inline';document.getElementById('commentdontshow2_771238').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_771238">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                        <table width="746px" id="commentshow_771179" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">DustynD                    <br />
                                        <br />
                    <font size=1>01/26/2012</br>
                    11:18</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/321556.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Great Movie! Loved every mintues of it and it culminates to a terrific finish. Will probably win best picture and its well deserved.
**A**                        <div id="commentformreply771179">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_771179" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                +2                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_771179').load('comments.php?commentid=771179&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_771179').load('comments.php?commentid=771179&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_771179').style.display='none';document.getElementById('commentdontshow_771179').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply771179').load('comments.php?commentid=771179&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_771179" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">DustynD <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_771179').style.display='inline';document.getElementById('commentdontshow_771179').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_771179">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            +2                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_771024" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">Geryn                    <br />
                                        <br />
                    <font size=1>01/25/2012</br>
                    16:12</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/332745.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Too bad most of you who dont like this movie arent really watching it. The cinematography is brilliant, I caught so many sublties that would have beem omitted or overlooked if there had been diaglog. Of course the music also proved you can express palpable emotion without dialog. Unique? Yes, this movie is because it has been made with intelligence of the modern cinema and the artistic touch of 21st century imagery. This is a very special movie that does what any good movie should do, suspend your belief and immerse you in another world and entertain you. If you were bored, go back to playing your video games or watching mindlessly idiot movies filled with this years talentless commodities selling themselves for their 15 minutes of fame. Bravo! I hope it wins many awards at the Oscars.                        <div id="commentformreply771024">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_771024" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                +3                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_771024').load('comments.php?commentid=771024&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_771024').load('comments.php?commentid=771024&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_771024').style.display='none';document.getElementById('commentdontshow_771024').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply771024').load('comments.php?commentid=771024&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_771024" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">Geryn <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_771024').style.display='inline';document.getElementById('commentdontshow_771024').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_771024">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            +3                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_770932" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">TGFHGuy                    <br />
                                        <br />
                    <font size=1>01/25/2012</br>
                    03:46</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/317757.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Two thumbs up for me! this movie pays homage to the way movies were made in the past, I think some people forget that aspect of it.                         <div id="commentformreply770932">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_770932" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                +2                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_770932').load('comments.php?commentid=770932&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_770932').load('comments.php?commentid=770932&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_770932').style.display='none';document.getElementById('commentdontshow_770932').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply770932').load('comments.php?commentid=770932&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_770932" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">TGFHGuy <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_770932').style.display='inline';document.getElementById('commentdontshow_770932').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_770932">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            +2                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_770036" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">bitten2ice                    <br />
                                        <br />
                    <font size=1>01/21/2012</br>
                    09:24</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/255398.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Quite a remarkable movie. Bound for cult status and plenty of awards i would guess.                        <div id="commentformreply770036">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_770036" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                +1                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_770036').load('comments.php?commentid=770036&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_770036').load('comments.php?commentid=770036&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_770036').style.display='none';document.getElementById('commentdontshow_770036').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply770036').load('comments.php?commentid=770036&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_770036" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">bitten2ice <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_770036').style.display='inline';document.getElementById('commentdontshow_770036').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_770036">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            +1                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_769996" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">TheFluffer                    <br />
                                        <br />
                    <font size=1>01/21/2012</br>
                    02:22</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/179762.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        A refreshing break from the EPIC multimillion dollar special FX films we get force fed these days! Reminds me of Mel Brooks "Slient Movie" (1976) only better! Awesome Flick! 8/10                        <div id="commentformreply769996">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_769996" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_769996').load('comments.php?commentid=769996&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_769996').load('comments.php?commentid=769996&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_769996').style.display='none';document.getElementById('commentdontshow_769996').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply769996').load('comments.php?commentid=769996&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_769996" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">TheFluffer <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_769996').style.display='inline';document.getElementById('commentdontshow_769996').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_769996">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_769960" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">InkedK                    <br />
                                        <br />
                    <font size=1>01/20/2012</br>
                    22:35</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/155998.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Great movie, but not for everyone                        <div id="commentformreply769960">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_769960" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_769960').load('comments.php?commentid=769960&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_769960').load('comments.php?commentid=769960&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_769960').style.display='none';document.getElementById('commentdontshow_769960').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply769960').load('comments.php?commentid=769960&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_769960" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">InkedK <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_769960').style.display='inline';document.getElementById('commentdontshow_769960').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_769960">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_769790" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">spaz22                    <br />
                                        <br />
                    <font size=1>01/20/2012</br>
                    01:03</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/321050.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        this is on of the best and most original movies ive seen, it is amazing.                        <div id="commentformreply769790">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_769790" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_769790').load('comments.php?commentid=769790&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_769790').load('comments.php?commentid=769790&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_769790').style.display='none';document.getElementById('commentdontshow_769790').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply769790').load('comments.php?commentid=769790&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_769790" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">spaz22 <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_769790').style.display='inline';document.getElementById('commentdontshow_769790').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_769790">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_769844" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">Doogie <br /><br />
                        <font size=1>01/20/2012</br>
                        09:38</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/321496.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            Original ? i think youve made an error in your choice of words.                         
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_769844" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    +1                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_769844').load('comments.php?commentid=769844&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_769844').load('comments.php?commentid=769844&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_769844').style.display='none';document.getElementById('commentdontshow2_769844').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_769844" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">Doogie<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_769844').style.display='inline';document.getElementById('commentdontshow2_769844').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_769844">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                +1                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
                        <table width="746px" id="commentshow_769828" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">ailuvu                    <br />
                                        <br />
                    <font size=1>01/20/2012</br>
                    06:33</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/321300.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        I really think this movie is fantastic. I enjoyed it so much. I will never get tired watching this all again and again.:D                        <div id="commentformreply769828">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_769828" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_769828').load('comments.php?commentid=769828&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_769828').load('comments.php?commentid=769828&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_769828').style.display='none';document.getElementById('commentdontshow_769828').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply769828').load('comments.php?commentid=769828&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_769828" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">ailuvu <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_769828').style.display='inline';document.getElementById('commentdontshow_769828').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_769828">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_769820" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">ColdSnow                    <br />
                                        <br />
                    <font size=1>01/20/2012</br>
                    05:19</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/209200.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        Awesome Cast, nice story, best production of 2011 along with descendants. Some of pictures say more than 1000 words. Loved the old fashioned style. A movie to show young generation something fresh and to remind older generation of the past. Awesome Music! Movie 9/10, Sound 10/10, Picture 10/10. PS: Why is this movie not in the middle, along with other mainstream?                        <div id="commentformreply769820">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_769820" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                +1                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_769820').load('comments.php?commentid=769820&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_769820').load('comments.php?commentid=769820&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_769820').style.display='none';document.getElementById('commentdontshow_769820').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply769820').load('comments.php?commentid=769820&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_769820" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">ColdSnow <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_769820').style.display='inline';document.getElementById('commentdontshow_769820').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_769820">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            +1                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                        <table width="746px" id="commentshow_769720" style="display:inline;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test">xminer                    <br />
                                        <br />
                    <font size=1>01/19/2012</br>
                    14:35</font></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/138420.gif" width=40 height=50/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                        This is a top quality copy but if you like spoken dialogue in your movies this isnt for you,it is made as a silent movie from the early days of cinematography with music only.                        <div id="commentformreply769720">
                        </div>
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting_769720" style="min-height:36px;">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                                                                                                0                                                                                    </span>
                        &nbsp;
                        <span class="ratings">
                            <a href="#" onClick="$('#commentvoting_769720').load('comments.php?commentid=769720&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                            
                            <a href="#" onClick="$('#commentvoting2_769720').load('comments.php?commentid=769720&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow_769720').style.display='none';document.getElementById('commentdontshow_769720').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                        </span>
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom"><a href="#" style="font-size:12px;" onClick="$('#commentformreply769720').load('comments.php?commentid=769720&replyform=1&id=1226064','',showNewContent);return false;">&gt;&gt; REPLY</a></td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

            <table width="746px" id="commentdontshow_769720" style="display:none;" border="0" cellspacing="0" cellpadding="0">
              <tr>
                <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_top.gif" height="8px"/>
                    <span class="test2">xminer <br /><br /></span>
                    <img style="display: block; background-color: #AFAFAF; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked2.gif"/>
                    <img style="display: block;" src="http://img.movie2k.to/img/user_bottom.gif" height="8px"/></td>
                <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_top2.gif" height="8px"/></td>
              </tr>
            
              <tr>
                <td rowspan="2" width="522px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                       <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow_769720').style.display='inline';document.getElementById('commentdontshow_769720').style.display='none';return false;">&gt;&gt;</a>
                    
                    </td>
                <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                    <div id="commentvoting2_769720">
                        <span style="vertical-align:top;position:absolute;left:900px;">
                            0                        </span>&nbsp;
                    </div>
                </td>
              </tr>
              <tr>
                <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
              </tr>
            
              <tr>
                <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_bottom2.gif" height="8px"/></td>
              </tr>
            </table>

                            <div style="margin-left:50px;">
                <table width="696px" id="commentshow2_769749" border="0" cellspacing="0" cellpadding="0" style="display:inline;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test1a">fooman <br /><br />
                        <font size=1>01/19/2012</br>
                        18:03</font></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/userpics/320513.gif" width=40 height=50/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:17px;">
                            Wow...Great movie, really enjoyed it. Not gonna be everyones cup of tea, but give it a chance...it grows on you. 
Oscar nod for the dog!                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_1_769749" style="min-height:36px;">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                                                    0                                                            </span>
                            &nbsp;
                            <span class="ratings">
                                <a href="#" onClick="$('#commentvoting2_1_769749').load('comments.php?commentid=769749&vote=good&id=1226064','',showNewContent);return false;"><img src="http://img.movie2k.to/img/plus.gif" width="22" height="22" border=0 alt="good comment!" title="good comment!"></a>
                                
                                <a href="#" onClick="$('#commentvoting2_2_769749').load('comments.php?commentid=769749&vote=bad&id=1226064','',showNewContent);document.getElementById('commentshow2_769749').style.display='none';document.getElementById('commentdontshow2_769749').style.display='inline';return false;"><img src="http://img.movie2k.to/img/minus.gif" width="22" height="22" alt="bad comment!" title="bad comment!" border=0></a>
                            </span>
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
    
                <div style="margin-left:50px;">
                <table width="696px" id="commentdontshow2_769749" border="0" cellspacing="0" cellpadding="0" style="display:none;">
                  <tr>
                    <td rowspan="4" valign="top" width="154px" style="padding-right:19px;"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/user_reply_top.gif" height="8px"/>
                        <span class="test2a">fooman<BR></span>
                        <img style="display: block; background-color: #E3E3E3; padding-left:10px; padding-right:10px;" src="http://img.movie2k.to/img/user_blocked_reply.gif"/>
                        <img style="display: block;" src="http://img.movie2k.to/img/user_reply_bottom.gif" height="8px"/></td>
                    <td colspan="2" valign="bottom" height="8px"><img style="display: block; padding-top:10px;" src="http://img.movie2k.to/img/comment_reply_top2.gif" height="8px"/></td>
                  </tr>
                
                  <tr>
                    <td rowspan="2" width="422px" class="comment" valign="top" bgcolor="#E3E3E3" style="padding-left:10px; padding-right:10px;">
                            <a href="#" style="text-decoration:none;" onClick="document.getElementById('commentshow2_769749').style.display='inline';document.getElementById('commentdontshow2_769749').style.display='none';return false;">&gt;&gt;</a>
                        
                        </td>
                    <td width="85px" valign="top" bgcolor="#E3E3E3" style="font-size:19px;">
                        <div id="commentvoting2_2_769749">
                            <span style="vertical-align:top;position:absolute;left:900px;">
                                0                            </span>&nbsp;
                        </div>
                    </td>
                  </tr>
                  <tr>
                    <td bgcolor="#E3E3E3" valign="bottom" style="height:1px;font-size:1px;">&nbsp;</td>
                  </tr>
                
                  <tr>
                    <td colspan="2" valign="top" height="8px"><img style="display: block;" src="http://img.movie2k.to/img/comment_reply_bottom2.gif" height="8px"/></td>
                  </tr>
                </table>
                </div>
            
               </div>
    </div>
    <div id="movieviews" name="movieviews"></div>
        <script>
            function showNewContent() {  
                $('#content').show('normal',hideLoader());  
            }  
            function hideLoader() {  
                $('#load').fadeOut('normal');  
            }  
            
            window.setTimeout("$('#movieviews').load('user_movieviews.php?movieid=1226064');", 120000);
            
        </script>


</div>

</div>

    

  </div>

	
</div>
<br>

    <div style="display:none">    
        <script type="text/javascript">
        
          var _gaq = _gaq || [];
          _gaq.push(['_setAccount', 'UA-24229017-1']);
          _gaq.push(['_trackPageview']);
        
          (function() {
            var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
            ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
            var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
          })();
        
        </script>
    </div>
<script type="text/javascript" src="http://www.movie2k.to/layer.php"></script>    


        <div style="position:absolute;z-index:2;left:280px;top:5px;">
            <a href="http://www.stopp-acta.info/english" target="_blank"><IMG SRC="http://img.movie2k.to/img/stopacta.gif" border=0 /></a>
        </div>
        
</body></html>

 
