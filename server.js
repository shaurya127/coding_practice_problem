const express = require("express");
const ArtcileRouter = require("./routes/articles");

const app = express();
app.listen(8000);

app.set("view engine", "ejs");

app.use(ArtcileRouter);
app.use("/articles", ArtcileRouter);

app.get("/", (req, res) => {
  const articles = [
    {
      title: "Test article",
      createdAt: Date.now(),
      description: "Test description",
    },
  ];

  res.render("index", { articles: articles });
});
