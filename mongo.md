status check ----> sudo systemctl status mongod

enable --> sudo systemctl start mongod
stop---> sudo service mongod stop

mongosh  
exit
how many db in mongoshell ---> show dbs
create db  --->   use my_db
which db ---> db
data insert one----> db.products.insertOne({name:'iphone10',price:'10000',catagory:'smartphone'});
db.products.insertOne(json format data rakhe)

TO SHOW ALL PRODUCTS----> db.products.find()
TO SHOW ALL PRODUCTS PRETTY----> db.products.find().pretty()


insertMany: db.Products.insertMany(json arraya)

databse find by condition:
db.products.find({name:'iphone10'})

updateOne : db.products.updateOne({json :'conditon'},{$set:{price:100000}})

updateMany:db.products.updateMany()

condition match na krle sob dhrobe

deleteOne:db.products.deleteOne(name:'constion')
deleteMany:

if any problem to enable :
sudo chown -R mongodb:mongodb /var/lib/mongodb
sudo chown -R mongodb:mongodb /tmp/mongodb-27017.sock



