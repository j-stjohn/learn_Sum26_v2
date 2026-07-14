# Website Hosting Guide:

## Background

  - **Date:** 07/12/26
  - **Version:** 01

> *Done with Porkbun and Github Pages*

---

## Preface

---

- This guide was created for creating a logic pathway of how to host a website.

- Under my current knowledge base I know that a static web page (html page) needs 2 things to have that custom made feel
    1. Custom Domain Name
    2. Webpage server hosting

---

## Setup

### Documents Needed:

- html documents to host
    - it is critical to have an index.html file for the github server to host an initial page

> My  project was for our wedding, it had a `homepage`, `about us`, `gallery`, `rsvp`, and `registry`

## Domain

- The domain I used was purchased through https://porkbun.com

- We need to establish our dns ports on the domain after purchase.
- When setting up the DNS Routing in Porkbun to github, these are the points to target
    - `A`  |  thestjohns.wedding  |  185.199.108.153  |  600
    - `A`  |  thestjohns.wedding  |  185.199.109.153  |  600
    - `A`  |  thestjohns.wedding  |  185.199.110.153  |  600
    - `A`  |  thestjohns.wedding  |  185.199.111.153  |  600
    - `AAAA`  |  thestjohns.wedding  |  2606:50c0:8000::153  |  600
    - `AAAA`  |  thestjohns.wedding  |  2606:50c0:8001::153  |  600
    - `AAAA`  |  thestjohns.wedding  |  2606:50c0:8002::153  |  600
    - `AAAA`  |  thestjohns.wedding  |  2606:50c0:8003::153  |  600
    - `CNAME`  | www.thestjohns.wedding  |  j-stjohn.github.io  |  600

> Ensure not to park the domain, that means it resets back to the default aka porkbun.com

---

## github Pages

- Now we need to setup the portion of telling github that it can use our custom domain

> We will assume nothing has been loaded into our github repository

1. Within the main branch upload your index.html file and any other html files

2. commit and push your changes in the codebase.

3. Create a branch of this codebase called hosting

4. At the main row goto settings -> Pages -> Custom Domain

5. Enter the custom domain ours is: `thestjohns.wedding`

6. Allow the DNS check to progress and *viola* your site is now hosted
    - It is recommended to enable https encryption on this site so new users trust it by default

---

