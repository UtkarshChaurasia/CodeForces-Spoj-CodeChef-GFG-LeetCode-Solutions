"""Before running this script visit to: #https://www.google.com/settings/security/lesssecureapps and on click allow access button"""


import smtplib
import pandas as pd
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
from email.mime.base import MIMEBase
from email import encoders



"""Create an excel sheet with a column name as Email and put all the emails in that column. Replace "Demo_Mail.xlsx" with the name of excel sheet in below code"""


df = pd.read_excel("Demo_Mail.xlsx")        
emails = df["Email"].values


email_user = 'sender email id'              #replace with sender's email id within inverted commas
email_password = 'sender password'          #replace with sender's password within inverted commas

subject = 'Workshop Invitation'             #set the subject

msg = MIMEMultipart()
msg['From'] = email_user
msg['Subject'] = subject

body = 'Hi there, sending this email from Python!'    #create the body
msg.attach(MIMEText(body,'plain'))

filename='test.jpeg'                                  """replace test.jpeg with the file name which has to be sent as attachment and make sure it is presnt 
                                                        in the same folder"""


attachment  =open(filename,'rb')

part = MIMEBase('application','octet-stream')
part.set_payload((attachment).read())
encoders.encode_base64(part)
part.add_header('Content-Disposition',"attachment; filename= "+filename)

msg.attach(part)
text = msg.as_string()
server = smtplib.SMTP('smtp.gmail.com',587)
server.starttls()
server.login(email_user,email_password)

for email in emails:
    email_send = email
    server.sendmail(email_user,email_send,text)
server.quit()



