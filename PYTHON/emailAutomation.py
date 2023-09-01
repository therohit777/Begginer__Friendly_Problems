#sarthaknerd
#import pywhatkit 
#start it
#pywhatkit.start_server()
#send using the mail using this format
#pywhatkit.send_mail(email_sender, password, subject, message, email_receiver

#Note: At this time, the pywahtkit library is primarily used for automating Whatsapp messages, and currently does not support email formats. 
#The code snippet you provided seems to be attempting to use pywhatkit for sending emails, but this functionality is not present in the library. 
#If you want to automate sending emails, I recommend using the smtplib library. The sample code for this is included below.

import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText

#Set up your email and authentication details
email_sender = "sender_email@example.com"
password_sender = "sender_password"

#Create the email message
message = MIMEMultipart()
message['From'] = email_sender
message['To'] = "reciever@example.com"
message['Subject'] = "Subject of the email"

body = "This is the body of the email."
message.attach(MIMEText(body, 'plain'))

#Set up the SMTP (Simple Mail Transfer Protocol) server and send the email
smtp_server = "smtp.example.com"
smtp_port = 587  # Use 465 for SSL or 587 for TLS

with smtplib.SMTP(smtp_server, smtp_port) as server:
    server.starttls()  # Encrypt the connection
    server.login(email_sender, password_sender)
    server.sendmail(sender_email, "recipient@example.com", message.as_string())

#DISCLAIMER: This code assumes that the SMTP server details and authentication credentials are correct.
#Additionally, using plain email and password for authentication isn't considered secure.
#It's advisable to use more secure methods for managing credentials, such as using environment variables.
