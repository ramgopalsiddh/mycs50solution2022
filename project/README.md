# YOUR PROJECT TITLE - Personal portfolio website
#### Video Demo:  < https://youtu.be/fa9EJVBsRR8 >
#### Description: Hi, I am ram gopal siddh,
This is my  personal portfolio website that is my CS50 final project video
this is my git hub link - https://github.com/ramgopalsiddh/ and website link is https://ramgopalsiddh.github.io/
this website has 4 main file
1. index.html
             this is main file that contain the html code that use for creat outline of the website
---------------------this is html code ---------------------------------------------
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>personal portfolio website</title>
    <link rel="stylesheet" href="style.css">
    <script src="https://kit.fontawesome.com/1aa96888a3.js" crossorigin="anonymous"></script>
</head>
<body>
    <div id="header">
        <div class="continer">
            <nav>
                <h1 class="logo">RAM_GOPAL_SIDDH</h1>
                <ul id="sidemenu">
                    <li><a href="#header">HOME</a></li>
                    <li><a href="#projects">Projects</a></li>
                    <li><a href="#contact">Contact</a></li>
                    <li><a href="#about">About</a></li>
                    <i class="fa-solid fa-xmark" onclick="closemenu()"></i>
                </ul>
                <i class="fa-solid fa-bars" onclick="openmenu()"></i>
            </nav>
            <div class="header-text">
                <p>software developer</p>
                <h2>Hi i'm <span>Ram Gopal</span> </h2>
            </div>
        </div>
    </div>
    <!-------------------------Projects------------------------------------------->
    <div id="projects">
        <div class="continer">
            <h1 class="sub-title"> My Projects</h1>
            <div class="work-list">
                <div class="work">
                    <h1>commening</h1>
                    <!--add photo of work-->
                </div>
                <div class="work">
                    <h1>soon ...........</h1>
                    <!--add photo of work-->
                </div>
                <div class="work">
                    <!--add photo of work-->
                </div>
            </div>
        </div>
    </div>
<!---------------------------------Contact----------------------------------------->
    <div id="contact">
        <div class="continer">
            <div class="row">
                <div class="contact-left">
                    <h1 class="sub-title"> Contact Me</h1>
                    <p></a><i class="fa-solid fa-paper-plane"></i>ramgopalsiddh.000@gmail.com</p>
                    <div class="social-icons">
                        <a href="https://www.linkedin.com/in/ramgopalsiddh/"><i class="fa-brands fa-linkedin"></i></a>
                        <a href="https://github.com/ramgopalsiddh/"><i class="fa-brands fa-github-square"></i></a>
                        <a href="https://twitter.com/ramgopalsiddh1/"><i class="fa-brands fa-twitter-square"></i></a>
                    </div>
                    <!--add cv soon-->
                    <a href=""  class="btn btn2"> Download CV soon......</a>
                    <!--add cv soon-->
                </div>
                <div class="contact-right">
                    <form name="submit-to-google-sheet">
                        <input type="text" name="Name" placeholder="Your Name" required>
                        <input type="email" name="email" placeholder="Your Email" required>
                        <textarea name="Message" rows="6" placeholder="Your Message"></textarea>
                        <button type="submit" class="btn btn2">submit</button>
                    </form>
                    <span id="msg"></span>
                </div>
            </div>
        </div>
    </div>
<!-----------------------------------about------------------------------------------>
    <div id="about">
        <div class="continer">
            <div class="row">
               <!-- <div class="about-col-1">
                    <img src="about.jpg">
                </div> -->
                <div class="about-col-2">
                    <h1 class="sub-title">About me</h1>
                    <p> add some line of description</p>
                    <div class="tab-title">
                        <p class="tab-links active-link" onclick="opentab('skills')">Skills</p>
                        <p class="tab-links" onclick="opentab('experience')">Experience</p>
                        <p class="tab-links" onclick="opentab('education')">Education</p>
                    </div>
                    <div class="tab-contents active-tab" id="skills">
                        <ul>
                            <li><span>web devlopment</span</li>
                            <li><span>Git and github</span></li>
                            <li><span>Python</span></li>
                        </ul>
                    </div>
                    <div class="tab-contents" id="experience">
                        <ul>
                            <li><span>Freshers</span>(Student)</li>
                            <li><span>learning </span>new skills</li>
                        </ul>
                    </div>
                    <div class="tab-contents" id="education">
                        <ul>
                            <li> <span>2019 - current</span><br>B.tech student at<a href="https://gitjaipur.com/"> GIT Jaipur</a></li>
                            <li> <span>2018 - 2019</span><br> 12th from Shri Bhartiya Adarsh Vidhyapeeth Sr.Sec.School ,Sardarshahar(RBSE)</li>
                            <li> <span>2016 - 2017</span><br> 10th from Sanskar children aca.sr.sec.sch.,sardarshar(RBSE) </li>
                        </ul>
                    </div>
                </div>
            </div>
        </div>
        <div class="copyright">
            <p>copyright © RAM GOPAL. Made with <i class="fa-solid fa-heart"></i> by ram gopal siddh</p>
        </div>
    </div>
<!-----------------------js script------------------------------------------------------->
    <script>
        var tablinks = document.getElementsByClassName("tab-links");
        var tabcontents = document.getElementsByClassName("tab-contents");

        function opentab(tabname){
            for(tablink of tablinks){
                tablink.classList.remove("active-link");
            }
            for(tabcontent of tabcontents){
                tabcontent.classList.remove("active-tab");
            }
            event.currentTarget.classList.add("active-link");
            document.getElementById(tabname).classList.add("active-tab");
        }
    </script>
    <!------------------side menu style ---------------------------------->
    <script>
        var sidemenu = document.getElementById("sidemenu");

        function openmenu(){
            sidemenu.style.right = "0";
        }
        function closemenu(){
            sidemenu.style.right = "-200px";
        }
    </script>
    <!-----------------google sheet script--------------------------------------->
    <script>
        const scriptURL = 'https://script.google.com/macros/s/AKfycbxp6oWHmjKhZh-7XkPsBmtwQD9vwL2i8UnAd01JZGzpoxfzUy_6uTO3im9_UoFSlKzZNQ/exec'
        const form = document.forms['submit-to-google-sheet']
        const msg = document.getElementById("msg")

        form.addEventListener('submit', e => {
          e.preventDefault()
          fetch(scriptURL, { method: 'POST', body: new FormData(form)})
            .then(response => {
                msg.innerHTML = "Message sent successfully"
                setTimeout(function(){
                    msg.innerHTML = ""
                },5000)
                form.reset()
            })
            .catch(error => console.error('Error!', error.message))
        })
      </script>
</body>
</html>
--------------------------------------------------------end--------------------------------------------------------------------
2. style.css
            this file contain the css file that also called stylesheet . thais use for the style the wbsite

----------------------------------this is css code----------------------------------------------------------------------------

*{
    margin: 0;
    padding: 0;
    font-family: 'Poppins','sans-serif';
    box-sizing: border-box;
}
html{
    scroll-behavior: smooth;
}
body{
    background-color: #080808;
    color: #fff;
}

#header{
    width: 100%;
    height: 100vh;
    background-image: url(background.jpg);
    background-size: cover;
    background-position: center;
}

.continer{
    padding: 10px 10%;
}

nav{
    display: flex;
    align-items: center;
    justify-content: space-between;
    flex-wrap: wrap;
}
.logo{
    width: 140px;
    color: aqua;
    font-family: cursive;
}
nav ul li{
    display: inline-block;
    list-style: none;
    margin: 10px 20px;
}
nav ul li a{
    color: #fff;
    text-decoration: none;
    font-size: 18px;
    position: relative;
}
nav ul li a::after{
    content: '';
    width: 0;
    height: 3px;
    background: #ff004f;
    position: absolute;
    left: 0;
    bottom: -6px;
    transition: 0.5s;
}
nav ul li a:hover::after{
    width: 100%;
}
.header-text{
    margin-top: 20%;
    font-size: 30px;
}
.header-text h1{
    font-size: 60px;
    margin-top: 20px;
}
.header-text h2 span{
    color: red;
}

/* ------------about-------------------------------------------------- */

#about{
    padding: 80px 0;
    color: #ababab;
}
/*.row{
    display: flex;
    justify-content: space-between;
    flex-wrap: wrap;
}
.about-col-1{
    flex-basis: 35%;
}
about-col-1 img{
    width: 100%;
    size: 100px 10px;
    border-radius: 1px;
} */

.about-col-2{
    flex-basis: 60%;
}

.sub-title{
    font-size: 60px;
    font-weight: 600;
    color: #fff;
}

.tab-title{
    display: flex;
    margin: 20px 0 40px;
}

.tab-links{
    margin-right: 50px;
    font-size: 18px;
    font-weight: 500;
    cursor: pointer;
    position: relative;
}
.tab-links::after{
    content: '';
    width: 0;
    height: 3px;
    background: #ff004f;
    position: absolute;
    left: 0;
    bottom: -8px;
    transition: 0.5s;
}
.tab-links.active-link::after{
    width: 50%;
}

.tab-contents ul li{
    list-style: none;
    margin: 10px 0;
    font-size: 14px;
}
.tab-contents ul li span{
    color: #ff004f;
    font-size: 14px;
}
.tab-contents{
    display: none;
}
.tab-contents.active-tab{
    display: block;
}

/* -------------------------projects------------------------------- */
#projects{
    padding: 50px 0;
}
.work-list{
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(250px,1fr));
    grid-gap: 40px;
    margin-top: 50px;
    color: #f000f4;
    font-size: 30px;
}
.work{
    border-radius: 10px;
    position: relative;
    overflow: hidden;
}
.work img{
    width: 100%;
    border-radius: 10px;
    display: block;
}

/* --------------------------Contact--------------------------------------------*/
.contact-left{
    flex-basis: 35%;
    font-size: 20px;
}
.contact-right{
    flex-basis: 60%;
}
.contact-left p{
    margin-top: 30px;
}
.contact-left p i{
    color: #ff004f;
    margin-right: 15px;
    font-size: 25px;
}
.social-icons{
    margin-top: 30px;
}
.social-icons a{
    text-decoration: none;
    font-size: 70px;
    margin-right: 15px;
    color: #ababab;
    display: inline-block;
    transition: transform 0.5s;
}
.social-icons a:hover{
    color: #ff004f;
    transform: translateY(-5px);
}
.btn{
    display: block;
    margin: 50px auto;
    width: fit-content;
    border: 1px solid #ff004f;
    padding: 14px 50px;
    border-radius: 6px;
    text-decoration: none;
    color: #fff;
    transition: background 0.5s;
}
.btn:hover{
    background: #ff004f;
}
.btn.btn2{
    display: inline-block;
    background: #ff004f;
}
.contact-right form{
    width: 100%;
}
form input, form textarea{
    width: 100%;
    border: 0;
    outline: none;
    background: #262626;
    padding: 15px;
    margin: 15px 0;
    color: #fff;
    font-size: 18px;
    border-radius: 6px;
}
form .btn2{
    padding: 14px 60px;
    font-size: 25px;
    margin-top: 20px;
    cursor: pointer;
}
.copyright{
    width: 100%;
    text-align: center;
    padding: 25px 0;
    background: #262626;
    font-weight: 300;
    margin-top: 20px;
}
.copyright i{
    color: #ff004f;
    font-size: 20px;
}
nav .fa-solid{
    display: none;
}

/* -----------------------css for small screen------------------------------- */
@media only screen and (max-width: 600px){
    #header{
        background-image: url(/mobile1.jpg);
    }
    .header-text{
        margin-top: 100%;
        font-size: 16px;
    }
    .header-text h1{
        font-size: 30px;
    }
    nav .fas{
        display: block;
        font-size: 25px;
    }
    nav ul{
        background: #ff004f;
        position: fixed;
        top: 0;
        right: -200px;
        width: 200px;
        height: 100vh;
        padding-top: 50px;
        z-index: 2;
        transition: right 0.5s;
    }
    nav ul li{
        display: block;
        margin: 25px;
    }
    nav ul .fa-solid{
        position: absolute;
        top: 25px;
        left: 25px;
        cursor: pointer;
    }
    nav .fa-solid{
        display: inline;
    }
    .sub-title{
        font-size: 40px;
    }
    .about-col-1, .about-col-2{
        flex-basis: 100%;
    }
    .about-col-1{
        margin-bottom: 30px;
    }
    .about-col-2{
        font-size: 14px;
    }
    .tab-links{
        font-size: 16px;
        margin-right: 20px;
    }
    .contact-left, .contact-right{
        flex-basis: 100%;
    }
    .copyright{
        font-size: 14px;
    }
}

#msg{
    color: #61b752;
    margin-top: -40px;
    display: block;
    font-size: 20px;
}

-----------------------------------end--------------------------------------------------------------------------------------
3. background.jpg
               this is background photo of home page

4. mobile1.jpg
             this is background photo for small screen device
