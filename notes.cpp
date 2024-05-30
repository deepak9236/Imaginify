npx create-next-app@leatest .

npx shadcn-ui@latest init
Default


app--> layout.tsx
tailwind.config.ts ---> copy code from video description and paste
globals.css ---> copy code from video description and paste
delete public folder and add new public folder which are inside video description 
add favicon file in app folder

clerk set up:-
go clerk website and create new project 
copy .env credential and paste in .env file
add url in .env file where clerk sig-in is working
wrapper layout by clerk provider
add clerk middleware
make sign-in and sign-up page in frontend by using clerk


connect clerk with mongodb by using webHooks
1:- deploy project on varcel and copy deploy link from vercel
2:- go webhook section  in clerk:- 
add:- 
endpoint:- https://imaginify-26h7u5jka-deepak8321s-projects.vercel.app/api/webhooks/clerk
select user option
then click on Create
copy sign-in secrat and paste in .env file
install svix--> that help to verify authanticity


git config --global core.excludesfile ~/.gitignore_global
git init
git add .
git status
git commit -m "frontend deploy for webhooks"
git branch -m main
git remote add origin https://github.com/deepak9236/Imaginify.git
git push -u origin main
