import React from "react";
import Header from "./components/Header";
import Converter from "./components/Converter";

const App = () => {
  return (
    <div>
      <Header />
      <main>
        <Converter />
      </main>
    </div>
  );
};

export default App;
